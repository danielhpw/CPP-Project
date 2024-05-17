#ifndef Administrator_H
#define Administrator_H
#include<iostream>
#include<string>
#include"Security.h"
using namespace std;
namespace AD
{
	class Administrator
	{
	public:
		static int Login(string username, string password);
	};
}

#endif

