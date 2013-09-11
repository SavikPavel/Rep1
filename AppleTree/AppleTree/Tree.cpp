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
}

int Tree::Grow()
{
	srand((unsigned int) time(NULL));
	AppNum += rand() % 1000;
	return AppNum;
}