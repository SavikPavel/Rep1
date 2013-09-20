#include "tree.h"
#include <stdlib.h>
int Tree::getAppleNum()
{
	return AppNum;
}

bool Tree::setAppNum(int value)
{
	AppNum = value;
	return true;
}

Tree::Tree()
{
	AppNum = 0;
	FlowersNum = 0;
}
int Tree::Bloom()
{
	srand((unsigned int) time(NULL));
	FlowersNum += rand() % 1000;
	return FlowersNum;
}

int Tree::Grow()
{
	AppNum = FlowersNum;
	FlowersNum = 0;
	return AppNum;
}

int Tree::Shake()
{
	srand((unsigned int) time(NULL));
	AppNum -= rand() % 1000;
	if (AppNum < 0)
		AppNum = 0;
	return AppNum;
}