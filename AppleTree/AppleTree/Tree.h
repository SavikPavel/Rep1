#include "Apple.h"
#include <time.h>

class Tree
{
private:
	int AppNum;
	int FlowersNum;
public:
	int getAppleNum();
	bool setAppNum(int);
	Tree();
	int Grow();
	int Shake();
	int Bloom();
};