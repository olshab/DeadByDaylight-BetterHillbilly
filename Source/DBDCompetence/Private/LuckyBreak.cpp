#include "LuckyBreak.h"
#include "Net/UnrealNetwork.h"
#include "ECamperDamageState.h"

float ULuckyBreak::GetMinActivationTime() const
{
	return 0.0f;
}

float ULuckyBreak::GetMaxActivationTimeAtLevel() const
{
	return 0.0f;
}

float ULuckyBreak::GetHealingTimeToActivationTimeRatio() const
{
	return 0.0f;
}

void ULuckyBreak::Authority_TryActivatePerk()
{

}

void ULuckyBreak::Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState)
{

}

void ULuckyBreak::ActivationTimerEnded()
{

}

void ULuckyBreak::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ULuckyBreak, _isRecharging);
	DOREPLIFETIME(ULuckyBreak, _activationTime);
}

ULuckyBreak::ULuckyBreak()
{
	this->_maxActivationTime = 0.000000;
	this->_minActivationTime = 1.000000;
	this->_healingTimeToActivationTimeRatio = 1.000000;
	this->_isRecharging = false;
}
