#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "BlueprintEncryptionBPLibrary.generated.h"

UCLASS()
class UBlueprintEncryptionBPLibrary : public UBlueprintFunctionLibrary{
	GENERATED_BODY()
		/** Encrypts string using key. */
		UFUNCTION(BlueprintCallable, Category = "Aaron Hunt|Encryption")
			static FString EncryptString(FString InputString, FString Key);

		/** Decrypts string using key. */
		UFUNCTION(BlueprintCallable, Category = "Aaron Hunt|Encryption")
			static FString DecryptString(FString InputString, FString Key);
};