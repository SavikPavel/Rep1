#include <iostream>
#include <conio.h>
#include "Tree.h"
using namespace std;

int main()
{
	int choice = 0, n = 0;
	Tree MyAppleTree;
	cout << "\t\tThis is Apple Tree application!\n";
	while (choice != 3)
	{
		cout << "1. Grow some apples\n2. Shake!\n3. Exit\n";
		cin >> choice;
		system("cls");
		if (choice == 1)
		{
			n = MyAppleTree.Grow();
			cout << "There are " << n << " apples in your tree\n"; 
		}
		else if (choice == 2)
		{
			n = MyAppleTree.Shake();
			cout << "There are " << n << " apples in your tree\n"; 
		}
	}
	cout << "Press any key to finish application\n";
	_getch();
	return 0;
}