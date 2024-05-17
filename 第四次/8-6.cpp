#include<cstdlib>
#include<iostream>
using namespace std;
class MyInteger
{
public:
	int getint();
	void setint(int integer);
	int operator[](int index);
private:
	int integer;
};
int main()
{
	MyInteger mi;
	int inp, index;
	cout << "Please input number: ";
	cin >> inp;
	mi.setint(inp);
	cout << "Index: ";
	cin >> index;
	cout << "The number is: " << mi[index] << endl;
	


	system("PAUSE");
	return 0;
}
int MyInteger::getint(){return integer;}
void MyInteger::setint(int integer) { this->integer = integer; }
int MyInteger::operator[](int index)
{
	int digit = 0;
	int check = integer;
	int ans = -1;
	while (check != 0)
	{
		check = check / 10;
		digit++;
	}
	digit--;
	if (index < 0 || index > digit)
		return ans;
	else
	{
		ans = integer / (int)pow(10, index) % 10;
		return ans;
	}
}