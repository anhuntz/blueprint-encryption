#include "BlueprintEncryptionBPLibrary.h"
#include "BlueprintEncryption.h"
#include "Runtime/Core/Public/Misc/AES.h"
#include "Runtime/Core/Public/Misc/SecureHash.h"
#include "Runtime/Core/Public/Misc/Base64.h"

FString UBlueprintEncryptionBPLibrary::EncryptString(FString InputString, FString Key)
{
	if (InputString.IsEmpty()) return "";
	if (Key.IsEmpty()) return "";

	FString SplitSymbol = "EL@$@!";
	InputString.Append(SplitSymbol);

	Key = FMD5::HashAnsiString(*Key);
	TCHAR *KeyTChar = Key.GetCharArray().GetData();
	ANSICHAR *KeyAnsi = (ANSICHAR*)TCHAR_TO_ANSI(KeyTChar);

	uint8* Blob;
	uint32 Size;

	Size = InputString.Len();
	Size = Size + (FAES::AESBlockSize - (Size % FAES::AESBlockSize));

	Blob = new uint8[Size];

	if (StringToBytes(InputString, Blob, Size)) {

		FAES::EncryptData(Blob, Size, KeyAnsi);
		InputString = FString::FromHexBlob(Blob, Size);

		delete Blob;
		return InputString;
	}

	delete Blob;
	return "";
}

FString UBlueprintEncryptionBPLibrary::DecryptString(FString InputString, FString Key)
{
	if (InputString.IsEmpty()) return "";
	if (Key.IsEmpty()) return "";

	FString SplitSymbol = "EL@$@!";

	Key = FMD5::HashAnsiString(*Key);
	TCHAR *KeyTChar = Key.GetCharArray().GetData();
	ANSICHAR *KeyAnsi = (ANSICHAR*)TCHAR_TO_ANSI(KeyTChar);

	uint8* Blob;
	uint32 Size;

	Size = InputString.Len();
	Size = Size + (FAES::AESBlockSize - (Size % FAES::AESBlockSize));

	Blob = new uint8[Size];

	if (FString::ToHexBlob(InputString, Blob, Size)) {

		FAES::DecryptData(Blob, Size, KeyAnsi);
		InputString = BytesToString(Blob, Size);

		FString LeftData;
		FString RightData;
		InputString.Split(SplitSymbol, &LeftData, &RightData, ESearchCase::CaseSensitive, ESearchDir::FromStart);
		InputString = LeftData;

		delete Blob;
		return InputString;
	}

	delete Blob;
	return "";
}