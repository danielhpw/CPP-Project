#include<cstdlib>
#include<iostream>
using namespace std;
class PrimeNumber
{
public:
	PrimeNumber();
	PrimeNumber(int prime);
	PrimeNumber operator++(int ig);
	PrimeNumber operator--(int ig);
	int getpri();
	void setpri(int pri);
private:
	int prime;
};
int main()
{
	int num;
	cout << "Please input the number: ";
	cin >> num;
	PrimeNumber p(num);
	cout << "Next prime number(++): " << p++.getpri() << endl;
	cout << "Next prime number(--): " << p--.getpri() << endl;
	cout << "0 means no." << endl;


	system("PAUSE");
	return 0;
}
PrimeNumber::PrimeNumber() { prime = 1; }
PrimeNumber::PrimeNumber(int prime) { this->prime = prime; }
int PrimeNumber::getpri()
{
	return prime;
}
void PrimeNumber::setpri(int pri)
{
	prime = pri;
}
PrimeNumber PrimeNumber::operator++(int ig)
{
	int pri = prime;
	pri++;
	while (1)
	{
		int count = 0;
		for (int i = 2; i < pri; i++)
			if (pri % i == 0)
				count++;
		if (count == 0)
			break;
		else
			pri++;
	}
	return PrimeNumber(pri);
}
PrimeNumber PrimeNumber::operator--(int ig)
{
	int pri = prime;
	pri--;
	while (1)
	{
		if (pri <= 1)
			break;
		int count = 0;
		for (int i = 2; i < pri; i++)
			if (pri % i == 0)
				count++;
		if (count == 0)
			break;
		else
			pri--;
	}
	if (pri <= 1)
		return PrimeNumber(0);
	else
		return PrimeNumber(pri);
}
