// Copyright - SPXCEBXR GAMES


#include "Character/Abilities/AttributeSets/CharacterAttributeSetBase.h"

#include "Helpers/LogCategories.h"
#include "Net/UnrealNetwork.h"

void UCharacterAttributeSetBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UCharacterAttributeSetBase, Health, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(UCharacterAttributeSetBase, MaxHealth, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(UCharacterAttributeSetBase, Stamina, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(UCharacterAttributeSetBase, MaxStamina, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(UCharacterAttributeSetBase, Power, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(UCharacterAttributeSetBase, MaxPower, COND_None, REPNOTIFY_Always)
}

void UCharacterAttributeSetBase::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UCharacterAttributeSetBase, Health, OldHealth);
	LOG_INFO(LogCharacterAttributeSetBase, "{0}: Replicated Health", NetRoleToString(GetOwningActor()));
}

void UCharacterAttributeSetBase::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UCharacterAttributeSetBase, MaxHealth, OldMaxHealth);
	LOG_INFO(LogCharacterAttributeSetBase, "{0}: Replicated MaxHealth", NetRoleToString(GetOwningActor()));
}

void UCharacterAttributeSetBase::OnRep_Stamina(const FGameplayAttributeData& OldStamina)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UCharacterAttributeSetBase, Stamina, OldStamina);
	LOG_INFO(LogCharacterAttributeSetBase, "{0}: Replicated Stamina", NetRoleToString(GetOwningActor()));
}

void UCharacterAttributeSetBase::OnRep_MaxStamina(const FGameplayAttributeData& OldMaxStamina)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UCharacterAttributeSetBase, MaxStamina, OldMaxStamina);
	LOG_INFO(LogCharacterAttributeSetBase, "{0}: Replicated MaxStamina", NetRoleToString(GetOwningActor()));
}

void UCharacterAttributeSetBase::OnRep_Power(const FGameplayAttributeData& OldPower)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UCharacterAttributeSetBase, Power, OldPower);
	LOG_INFO(LogCharacterAttributeSetBase, "{0}: Replicated Power", NetRoleToString(GetOwningActor()));
}

void UCharacterAttributeSetBase::OnRep_MaxPower(const FGameplayAttributeData& OldMaxPower)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UCharacterAttributeSetBase, MaxPower, OldMaxPower);
	LOG_INFO(LogCharacterAttributeSetBase, "{0}: Replicated MaxPower", NetRoleToString(GetOwningActor()));
}
