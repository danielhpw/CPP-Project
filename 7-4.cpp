#include<iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

class HotDogStand
{
public:
	HotDogStand(int IDvalue);
	void output();
	void JustSold();
	int getSoldnum();
	static void getnum();
	static int setnum();
private:
	static int num;
	int ID;
	int total = 1000;
	int soldnum;
};
int HotDogStand::num = 0;

int main(void)
{
	HotDogStand a(1), b(2), c(3);
	int stand, jg;
	srand(1);

	for (int i = 0; i < 1000; i++)
	{
		stand = rand() % 3;
		HotDogStand::setnum();
		switch (stand)
		{
		case 0:
			a.JustSold();
			break;
		case 1:
			b.JustSold();
			break;
		case 2:
			c.JustSold();
			break;
		}
	}
	cout << "The result is in the follow:\n";
	a.output();
	b.output();
	c.output();
	cout << "\nThe total number that sold by all hot dog stands is ";
	HotDogStand::getnum();
	return(0);
}

void HotDogStand::getnum()
{
	cout << num;

}

HotDogStand::HotDogStand(int IDvalue) :ID(IDvalue), soldnum(0)
{}

void HotDogStand::JustSold()
{
	soldnum++;
}
int HotDogStand::getSoldnum()