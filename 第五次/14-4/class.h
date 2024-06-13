#ifndef class_H
#define class_H
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
namespace Class
{
	class UniversityStaff
	{
	public:
		UniversityStaff();
		UniversityStaff(string theName);
		UniversityStaff(const UniversityStaff& theObject);
		string getName() const;
		UniversityStaff& operator =(const UniversityStaff& rtSide);
		friend istream& operator >>(istream& inStream, UniversityStaff& staffObject);
		friend ostream& operator <<(ostream& outStream, const UniversityStaff& staffObject);
	private:
		string Name;
	};

	class Student
	{
	public:
		Student();
		Student(const string UN, const int RN, const UniversityStaff& us);
		Student(Student& st);
		string getUN();
		int getRN();
		Student& operator =(const Student& rtSide);
		friend istream& operator >>(istream& inStream, Student& staffObject);
		friend ostream& operator <<(ostream& outStream, const Student& staffObject);
	
		string UN; // univeristy name
		int RN; //registration number
		UniversityStaff US;
	};

	class ScienceStudent : Student
	{
	public:
		ScienceStudent();
		ScienceStudent(const string AD, const string gra, const Student st);
		ScienceStudent(ScienceStudent& ss);
		string getAD();
		string getgra();
		ScienceStudent& operator =(const ScienceStudent& rtSide);
		friend istream& operator >>(istream& inStream, ScienceStudent& staffObject);
		friend ostream& operator <<(ostream& outStream, const ScienceStudent& staffObject);
	private:
		string AD; //addtional displine
		string gra; //undergraduate or postgraduate
	};

}


#endif // !class_H

