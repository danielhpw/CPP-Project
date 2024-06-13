#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
#include"creature.h"
using namespace std;
using namespace creature;
void battleArena(Creature& c1, Creature& c2)
{
	int hp1 = c1.getHitpoints(),
		hp2 = c2.getHitpoints();
	string s1 = c1.getSpecies(),
		s2 = c2.getSpecies();
	cout << s1 << " vs " << s2 << endl << endl;
	while (1)
	{
		cout << s1 << " to " << s2 << endl;
		hp2 = hp2 - c1.getDamage();
		cout << "The rest hp of " << s2 << ": " << hp2 << endl << endl;

		cout << s2 << " to " << s1 << endl;
		hp1 = hp1 - c2.getDamage();
		cout << "The rest hp of " << s1 << ": " << hp1 << endl << endl;

		if (hp1 <= 0 && hp2 <= 0)
		{
			cout << "Tie!" << endl;
			break;
		}
		else if (hp1 <= 0)
		{
			cout << s2 << " win!" << endl;
			break;
		}
		else if (hp2 <= 0)
		{
			cout << s1 << " win!" << endl;
			break;
		}
	}
}
int main()
{
	srand(time(NULL));
	Human H(10, 200);
	Cyberdemon C(15, 150);
	Balrog B(25, 100);
	Elf E(20, 180);
	battleArena(B, C);
	cout << endl;
	battleArena(H, E);
	system("PAUSE");
	return 0;
}