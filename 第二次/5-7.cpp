#include<iostream>
using namespace std;

int main(void)
{
	int array[6],
		index;
	for (int i = 0; i < 6; i++)
	{
		array[i] = 0;
	}
	cout << "Input the grades=>";
	cin >> index;
	while (index >= 0 && index < 6)
	{
		array[index]++;
		cin >> index;
	}
	for (int i = 0; i < 6; i++)
	{
		cout << array[i] << " grade(s) of " << i << endl;
	}
	return(0);
}