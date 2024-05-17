#include<iostream>
#include<string>
#include<cstdlib>
#include"Security.h"
#include"User.h"
#include"Administrator.h"
using namespace std;
using namespace SecurityCheck;

int main()
{
	AD::Administrator A;
	US::User U;
	string un, ps;
	cout << "Please enter the username:\n>> ";
	getline(cin, un);
	cout << "Please enter the password:\n>> ";
	getline(cin, ps);
	if (A.Login(un, ps) == 1)
		cout << "Welcome, Administrator!" << endl;
	else if (U.Login(un, ps) == 1)
		cout << "Welcome, User!" << endl;
	else
		cout << "Your imformation is error!" << endl;


	system("PAUSE");
	return 0;
}