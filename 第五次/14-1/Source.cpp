#include<iostream>
#include<cstdlib>
#include<string>
#include"class.h"
using namespace std;
using namespace Class;

int main()
{
	Administrator A("EMP", "12345678", 50000);
	A.readData();
	A.print();
	A.printCheck();
	system("PAUSE");
	return 0;
}