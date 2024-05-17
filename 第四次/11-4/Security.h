#ifndef Security_H
#define Security_H
#include<iostream>
#include<string>
using namespace std;
namespace SecurityCheck
{
	class Security
	{
	public:
		static int validate(string username, string password);
	};
}

#endif

