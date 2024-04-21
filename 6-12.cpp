#include <iostream>
#include<fstream>
#include<string>
#include <cstdlib>
using namespace std;

class BoxOfProduce
{
public:
	BoxOfProduce();
	void setFruit1(string v[], int a);
	void setFruit2(string v[], int a);
	void setFruit3(string v[], int a);
	string getFruit1();
	string getFruit2();
	string getFruit3();
private:
	string fruit1;
	string fruit2;
	string fruit3;
};

int main(void)
{
	BoxOfProduce eat;
	int a[3],
		num;
	string v[5],
		change;
	fstream inputStream;
	inputStream.open("fruit.txt");
	for (int i = 0; i < 5; i++)
	{
		inputStream >> v[i];
	}
	srand(time(NULL));
	for (int i = 0; i < 3; i++)
	{
		a[i] = rand() % 5;
	}
	eat.setFruit1(v, a[0]);
	eat.setFruit2(v, a[1]);
	eat.setFruit3(v, a[2]);

	cout << "\nThe three items in the box is on the following:\n";
	cout << "1  " << eat.getFruit1();
	cout << "\n2  " << eat.getFruit2();
	cout << "\n3  " << eat.getFruit3();
	cout << "\nwhich item you want to change(enter the number that before the fruit) and enter the friut you want to put in: