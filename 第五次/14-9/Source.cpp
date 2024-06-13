#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
#include"creature.h"
using namespace std;
using namespace creature;
int main()
{
	srand(time(NULL));
	Human H(10, 10);
	Cyberdemon C(15, 15);
	Balrog B(25, 25);
	Elf E(20, 20);
	for (int i = 0; i < 100; i++)
	{
		cout << "Human: " << endl;
		H.getDamage();
		cout << "Cyberdemon: " << endl;
		C.getDamage();
		cout << "Balrog: " << endl;
		B.getDamage();
		cout << "Elf: " << endl;
		E.getDamage();
		cout << endl;
	}
	system("PAUSE");
	return 0;
}