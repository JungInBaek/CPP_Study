#pragma once


//class Monster;		// 穿号識情

class Player
{
public:
	void KillMonster();
	void KillPlayer();

public:
	int _hp;
	int _attack;

	//class Monster* _target;		// 穿号識情
	Player* _target;
};