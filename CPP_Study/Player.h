#pragma once


//class Monster;		// ���漱��

class Player
{
public:
	void KillMonster();

public:
	int _hp;
	int _attack;

	//class Monster* _target;		// ���漱��
	Player* _target;
};