#pragma once

#include "Player.h"
#include "Monster.h"


void Player::KillMonster()
{
	//_target->KillMe();
}

void Player::KillPlayer()
{
	_target->_hp = 0;
}