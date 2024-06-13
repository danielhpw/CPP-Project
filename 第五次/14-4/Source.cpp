#include<iostream>
#include<cstdlib>
#include<string>
#include"class.h"
using namespace std;
using namespace Class;

int main()
{
	UniversityStaff US;
	Student st(" ", 0, US);
	ScienceStudent ss(" ", " ", st);
	cin >> ss;
	cout << ss;

	system("PAUSE");
	return 0;
}