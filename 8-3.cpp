#include<cstdlib>
#include<iostream>
#include<cmath>
using namespace std;
class Complex
{
public:
	Complex();
	Complex(double real, double imaginary);
	Complex(double realPart);
	double getreal() const;
	double getima() const;
	friend const Complex operator +(const Complex& c1, const Complex& c2);
	friend const Complex operator -(const Complex& c1, const Complex& c2);
	friend const Complex operator *(const Complex& c1, const Complex& c2);
	friend bool operator ==(const Complex& c1, const Complex& c2);
	friend ostream& operator <<(ostream& outputstream, const Complex& amount);
	friend istream& operator >>(istream& inputstream, Complex& amount);
private:
	double real;
	double imaginary;
};
int main()
{
	Complex i(0, 1), a(5, 4), b(11, 8), c;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "a + b: " << a + b << endl;
	cout << "Please input c: ";
	cin >> c;
	cout << "c: " << c << endl;
	cout << "a + b + c: " << a + b + c << endl;
	cout << "a x c: " << a * c << endl;
	if (a == c)
		cout << "a is equal to c." << endl;
	else
		cout << "a is not equal to c." << endl;

	system("PAUSE");
	return 0;
}
Complex::Complex() {real = 0;	imaginary = 0;}
Complex::Complex(double real, double imaginary) { this->real = real;	this->imaginary = imaginary; }
Complex::Complex(double realPart) { real = realPart;	imaginary = 0; }
double Complex::getreal() const {return real;}
double Complex::getima() const { return imaginary; }
const Complex operator +(const Complex& c1, const Complex& c2)
{
	double realP = c1.getreal() + c2.getreal();
	double imaP = c1.getima() + c2.getima();
	return Complex(realP, imaP);
}
const Complex operator -(const Complex& c1, const Complex& c2)
{
	double realS = c1.getreal() - c2.getreal();
	double imaS = c1.getima() - c2.getima();
	return Complex(realS, imaS);
}
const Complex operator *(const Complex& c1, const Complex& c2)
{
	double realm = c1.getreal() * c2.getreal() - (c1.getima() * c2.getima());
	double imam = c1.getreal() * c2.getima() + (c2.getreal() * c1.getima());
	return Complex(realm, imam);
}
bool operator ==(const Complex& c1, const Complex& c2)
{
	return (c1.getreal() == c2.getreal() && c1.getima() == c2.getima());
}
ostream& operator <<(ostream& outputstream, const Complex& c)
{
	double absima = fabs(c.getima());
	outputstream << c.getreal() << " ";
	if (c.getima() < 0)
		outputstream << "- ";
	else
		outputstream << "+ ";
	outputstream << absima << "i";
	return outputstream;
}
istream& operator >>(istream& inputstream, Complex& c)
{
	while (1)
	{
		double rea, ima;
		char sign, i;
		inputstream >> rea;
		inputstream >> sign;
		inputstream >> ima;
		inputstream >> i;
		c.real = rea;
		if (sign == '+')
		{
			if (i == 'i')
			{
				c.imaginary = ima;
				break;
			}
			else
				cout << "Error! Please input again!" << endl;
		}
		else if (sign == '-')
		{
			if (i == 'i')
			{
				c.imaginary = ima * -1;
				break;
			}
			else
				cout << "Error! Please input again!" << endl;
		}
		else
			cout << "Error! Please input again!" << endl;
	}
	return inputstream;
}