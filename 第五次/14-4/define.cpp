#include<iostream>
#include<cstdlib>
#include<string>
#include"class.h"
using namespace std;
namespace Class
{
	UniversityStaff::UniversityStaff() : Name("NO") {}
	UniversityStaff::UniversityStaff(string theName) : Name(theName) {}
	UniversityStaff::UniversityStaff(const UniversityStaff& theObject) { Name = theObject.Name; }
	string UniversityStaff::getName() const { return Name; }
	UniversityStaff& UniversityStaff::operator =(const UniversityStaff& rtSide) 
	{ 
		UniversityStaff us;
		us.Name = rtSide.Name;
		return us;
	}
	istream& operator >>(istream& inStream, UniversityStaff& staffObject)
	{
		cout << "Please enter the proctor's Name: ";
		getline(inStream, staffObject.Name);
		return inStream;
	}
	ostream& operator <<(ostream& outStream, const UniversityStaff& staffObject)
	{
		outStream << "The proctor's name: " << staffObject.Name << endl;
		return outStream;
	}
	
}

