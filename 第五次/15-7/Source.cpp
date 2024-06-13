#include<cstdlib>
#include<iostream>
#include<string>
#include<ctime>
#include"Dice.h"
using namespace std;
using namespace dice;
int main()
{
	srand(time(NULL));
	Dice d1;
	Dice d2;
	cout << "DICE: " << endl;
	for (int i = 0; i < 10; i++)
		cout << rollTwoDice(d1, d2) << endl;

	cout << "LOADEDDICE: " << endl;
	LoadedDice l1, l2;
	for (int i = 0; i < 10; i++)
	{
		cout << rollTwoDice(l1, l2) << endl;
	}
	system("PAUSE");
	return 0;
}