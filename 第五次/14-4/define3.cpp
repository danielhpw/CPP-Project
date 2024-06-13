#include<iostream>
#include<cstdlib>
#include<string>
#include"class.h"
using namespace std;
namespace Class
{
	ScienceStudent::ScienceStudent() :Student(), AD("NO"), gra("NO") {}
	ScienceStudent::ScienceStudent(const string AD, const string gra, const Student st) : AD(AD), gra(gra)
	{
		UN = st.UN; RN = st.RN; US = st.US;
	}
	ScienceStudent::ScienceStudent(ScienceStudent& ss)
	{
		AD = ss.AD; gra = ss.gra;
		UN = ss.UN; RN = ss.RN; US = ss.US;
	}
	string ScienceStudent::getAD() { return AD; }
	string ScienceStudent::getgra() { return gra; }
	ScienceStudent& ScienceStudent::operator =(const ScienceStudent& ss)
	{
		ScienceStudent s;
		s.AD = ss.AD; s.gra = ss.gra;
		s.UN = ss.UN; s.RN = ss.RN; s.US = ss.US;
		return s;
	}
	istream& operator >>(istream& inStream, ScienceStudent& ss)
	{
		cout << "Please enter the university's name: ";
		getline(inStream, ss.UN);
		cout << "Please enter the registration number: ";
		inStream >> ss.RN;
		cin.clear();
		cin.ignore();
		inStream >> ss.US;
		cout << "Please enter the additional science discipline: ";
		getline(inStream, ss.AD);
		cout << "Please enter the course: ";
		getline(inStream, ss.gra);
		return inStream;
	}
	ostream& operator <<(ostream& outStream, const ScienceStudent& ss)
	{
		outStream << "The university's name: " << ss.UN << endl;
		outStream << "The registration number: " << ss.RN << endl;
		outStream << ss.US;
		outStream << "The additional science discipline: " << ss.AD << endl;
		outStream << "The course: " << ss.gra << endl;
		return outStream;
	}
}

