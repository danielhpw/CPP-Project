#include<iostream>
#include<string>
#include"Security.h"
#include"user.h"
using namespace std;

namespace US
{
	int User::Login(string username, string password)
	{
		SecurityCheck::Security se;
		if (se.validate(username, password) == 1) return 1;
		else return 0;
		return 0;
	}
}