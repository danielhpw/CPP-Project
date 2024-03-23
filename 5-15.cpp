#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	int num[5],
		a,
		b,
		random[10];
	srand(time(NULL));
	cout << "Enter the actual PIN number=>";
	for (int i = 0; i < 5; i++)
	{
		cin >> a;
		num[i] = a;
	}

	for (int i = 0; i < 10; i++)
	{
		random[i] = rand() % 10;
	}

	cout << "\nPIN: 0 1 2 3 4 5 6 7 8 9";
	cout << "\nNUM: ";
	for (int i = 0; i < 10; i++)
	{
		cout << random[i] << " ";
	}

	cout << "\nEnter the number=>";
	for (int i = 0; i < 5; i++)
	{
		cin >> b;
		if (random[num[i]] != b)
		{
			cout << "\nThe user's response dose not correctly match the PIN number.";
			return(0);
		}
	}
	cout << "\nThe user's response  correctly match the PIN number.";
	return(0);
}