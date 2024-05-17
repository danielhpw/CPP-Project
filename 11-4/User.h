#ifndef User_H
#define User_H
#include<iostream>
#include<string>
#include"Security.h"
using namespace std;
namespace US
{
	class User
	{
	public:
		static int Login(string username, string password);
	};
}

#endif

