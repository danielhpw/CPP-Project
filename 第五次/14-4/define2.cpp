#include<iostream>
#include<cstdlib>
#include<string>
#include"class.h"
using namespace std;
namespace Class
{
	
	Student::Student() : UN("NO"), RN(0) {}
	Student::Student(const string UN, const int RN, const UniversityStaff& us) : UN(UN), RN(RN), US(us) {}
	Student::Student(Student& st) { UN = st.UN; RN = st.RN; US = st.US; }
	string Student::getUN() { return UN; }
	int Student::getRN() { return RN; }
	Student& Student::operator =(const Student& st) 
	{
		Student s;
		s. UN = st.UN; s.RN = st.RN; s.US = st.US;
		return s;
	}
	istream& operator >>(istream& inStream, Student& st)
	{
		cout << "Please enter the university's name: ";
		getline(inStream, st.UN);
		cout << "Please enter the registration number: ";
		inStream >> st.RN;
		inStream >> st.US;
		cin.clear();
		cin.ignore();
		return inStream;
	}
	ostream& operator <<(ostream& outStream, const Student& st)
	{
		outStream << "The university's name: " << st.UN << endl;
		outStream << "The registration number: " << st.UN << endl;
		outStream << st.US;
		return outStream;
	}
}

