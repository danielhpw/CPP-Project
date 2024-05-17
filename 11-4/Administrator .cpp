#include<iostream>
#include<string>
#include"Security.h"
#include"Administrator.h"
using namespace std;

namespace AD
{
	int Administrator::Login(string username, string password)
	{
		SecurityCheck::Security se;
		if (se.validate(username, password) == 2) return 1;
		else return 0;
		return 0;
	}
}