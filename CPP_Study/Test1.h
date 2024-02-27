#pragma once		// 중복 제거

// 옛날 중복 제거 방식 #pragma once와 같은 의미
#ifndef _TEST1_H__	// if not define 이름
#define _TEST1_H__	// define 이름

struct StatInfo
{
	int hp;
	int attack;
	int defence;
};


void Test_1();

void Test_2();

// 구현부를 넣을 경우 링크 중 문제 발생 가능성 있음
void Test_3();

#endif // !_TEST1_H__