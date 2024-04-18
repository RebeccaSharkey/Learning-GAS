// Copyright - SPXCEBXR GAMES

#pragma once

#include "CoreMinimal.h"

#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "Helpers/HelperMacros.h"

#include "CharacterAttributeSetBase.generated.h"

/**
 * 
 */
UCLASS()
class LEARNINGGAS_API UCharacterAttributeSetBase : public UAttributeSet
{
	GENERATED_BODY()

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	UPROPERTY(BlueprintReadOnly, Category="Health", ReplicatedUsing=OnRep_Health)
	FGameplayAttributeData Health;
	ATTRIBUTE_INITIALISATION(UCharacterAttributeSetBase, Health);	
	UPROPERTY(BlueprintReadOnly, Category="Health", ReplicatedUsing=OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_INITIALISATION(UCharacterAttributeSetBase, MaxHealth);
	
	UPROPERTY(BlueprintReadOnly, Category="Stamina", ReplicatedUsing=OnRep_Stamina)
	FGameplayAttributeData Stamina;
	ATTRIBUTE_INITIALISATION(UCharacterAttributeSetBase, Stamina);	
	UPROPERTY(BlueprintReadOnly, Category="Stamina", ReplicatedUsing=OnRep_MaxStamina)
	FGameplayAttributeData MaxStamina;
	ATTRIBUTE_INITIALISATION(UCharacterAttributeSetBase, MaxStamina);
	
	UPROPERTY(BlueprintReadOnly, Category="Power", ReplicatedUsing=OnRep_Power)
	FGameplayAttributeData Power;
	ATTRIBUTE_INITIALISATION(UCharacterAttributeSetBase, Power);	
	UPROPERTY(BlueprintReadOnly, Category="Power", ReplicatedUsing=OnRep_MaxPower)
	FGameplayAttributeData MaxPower;
	ATTRIBUTE_INITIALISATION(UCharacterAttributeSetBase, MaxPower);

	UFUNCTION()
	virtual void OnRep_Health(const FGameplayAttributeData& OldHealth);
	UFUNCTION()
	virtual void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);
	UFUNCTION()
	virtual void OnRep_Stamina(const FGameplayAttributeData& OldStamina);
	UFUNCTION()
	virtual void OnRep_MaxStamina(const FGameplayAttributeData& OldMaxStamina);
	UFUNCTION()
	virtual void OnRep_Power(const FGameplayAttributeData& OldPower);
	UFUNCTION()
	virtual void OnRep_MaxPower(const FGameplayAttributeData& OldMaxPower);
};
