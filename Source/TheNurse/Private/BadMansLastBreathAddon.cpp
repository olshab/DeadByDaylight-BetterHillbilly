#include "BadMansLastBreathAddon.h"

UBadMansLastBreathAddon::UBadMansLastBreathAddon()
{
	this->_activationDuration = 16.000000;
	this->_cooldownDuration = 60.000000;
	this->_badMansLastBreathCooldownIndicatorStatusEffect = NULL;
	this->_badMansLastBreathUndetectableStatusEffect = NULL;
	this->_cooldownIndicator = NULL;
	this->_undetectableEffect = NULL;
}
