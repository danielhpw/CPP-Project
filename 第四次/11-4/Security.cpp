#include<iostream>
#include<string>
#include"Security.h"
using namespace std;

namespace SecurityCheck
{
	int Security::validate(string username, string password)

	{
		if ((username == "abbott") && (password == "monday")) return 1;
		if ((username == "costello") && (password == "tuesday")) return 2;
		return 0;
	}
}