#include<iostream>
#include<cstdlib>
#include<string>
#include"class.h"
using namespace std;

namespace Class
{
	Employee::Employee() : name("No name yet"), ssn("No number yet"), netPay(0) {}
	Employee::Employee(const string& theName, const string& theSsn) : name(theName), ssn(theSsn), netPay(0) {}
	string Employee::getName() const { return name; }
	string Employee::getSsn() const { return ssn; }
	double Employee::GetNetPay() const { return netPay; }
	void Employee::setName(const string& newName) { name = newName; }
	void Employee::setSsn(const string& newSsn) { ssn = newSsn; }
	void Employee::setNetPay(double newNetPay) { netPay = newNetPay; }
	void Employee::printCheck() const
	{
		cout << "\nERROR: printCheck FUNCTION CALLED FOR AN \n"
			<< "UNDIFFERENTIATED EMPLOYEE.Aborting the program.\n"
			<< "Check with the author of the program about this bug.\n";
		exit(1);
	}


	SalariedEmployee::SalariedEmployee() : Employee(), salary(0){}
	SalariedEmployee::SalariedEmployee(const string& theName, const string& theSsn, double theWeeklySalary) : Employee(theName, theSsn), salary(theWeeklySalary) {}
	double SalariedEmployee::getSalary() const { return salary; }
	void SalariedEmployee::setSalary(double newSalary) { salary = newSalary; }
	void SalariedEmployee::printCheck()
	{
		setNetPay(salary);
		cout << "\n_______________________________________________\n";
		cout << "Pay to the order of " << getName() << endl;
		cout << "The sum of " << GetNetPay() << " Dollars\n";
		cout << "_______________________________________________\n";
		cout << "Check Stub NOT NEGOTIABLE \n";
		cout << "Employee Number: " << getSsn() << endl;
	}



	Administrator::Administrator() : SalariedEmployee(), 
		title("No title yet"), respon("No responsibility yet"), supervisor("No supervisor yet"){}
	Administrator::Administrator(const string& theName, const string& theSsn, double theAnnualSalary) : SalariedEmployee(theName, theSsn, theAnnualSalary),
		title("No title yet"), respon("No responsibility yet"),supervisor("No supervisor yet"){}
	void Administrator::setSupervisor(const string& newSupervisor) { supervisor = newSupervisor; }
	void Administrator::readData()
	{
		cout << "Administrator: " << getName() << endl;
		cout << "Enter the administrator's title: ";
		getline(cin, title);
		cout << "Enter the administrator's responsibility: ";
		getline(cin, respon);
		cout << "Enter the name of administrator's immediate supervisor: ";
		getline(cin, supervisor);
	}
	void Administrator::print()
	{
		cout << "\nAdministrator's Data" << endl;
		cout << "Administrator's name: " << getName() << endl;
		cout << "Administrator's title: " << title << endl;
		cout << "Administrator's responsibility: " << respon << endl;
		cout << "Administrator's supervisor: " << supervisor << endl;
	}
	void Administrator::printCheck()
	{
		cout << "\nAdministrator's paycheck" << endl;
		setNetPay(salary);
		cout << "Pay to the order of " << getName() << endl;
		cout << "The sum of $" << GetNetPay();
		cout << "\n_______________________________________________\n";
		cout << "Check Stub NOT NEGOTIABLE \n";
		cout << "Employee Number: " << getSsn() << endl;
		cout << "Salaried Employee: $" << salary;
		cout << "\n_______________________________________________\n";
	}
}