#ifndef e_h
#define e_h
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;


namespace Class
{
	class Employee
	{
	public:
		Employee();
		Employee(const string& theName, const string& theSsn);
		string getName() const;
		string getSsn() const;
		double GetNetPay() const;
		void setName(const string& newName);
		void setSsn(const string& newSsn);
		void setNetPay(double newNetPay);
		void printCheck() const;
	private:
		string name;
		string ssn;
		double netPay;
	};

	class SalariedEmployee : public Employee
	{
	public:
		SalariedEmployee();
		SalariedEmployee(const string& theName, const string& theSsn, double theWeeklySalary);
		double getSalary() const;
		void setSalary(double newSalary);
		void printCheck();
		double salary;
	};

	class Administrator : protected SalariedEmployee
	{
	public:
		Administrator();
		Administrator(const string& theName, const string& theSsn, double theAnnualSalary);
		void setSupervisor(const string& newSupervisor);
		void readData();
		void print();
		void printCheck();
	protected:
		string title;
		string respon;
		string supervisor;
	};
}





#endif // !e_h



