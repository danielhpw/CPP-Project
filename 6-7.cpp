#include<iostream>
using namespace std;

class PIZZA
{
public:
	int type;
	int size;
	int topping;
	void outputDescription();
	void computePrice();
};

int main(void)
{
	PIZZA pizza;
	cout << "Enter the type of pizza as a number. For example:0 is deep dish,1 is hand tossed and 2 is pan.=>";
	cin >> pizza.type;
	cout << "\nEnter the size of the pizza as a number.For example:(0 is small,1 is medium and 2 is large.=>";
	cin >> pizza.size;
	cout << "\nEnter the number of pepperoni or cheese toppings=>";
	cin >> pizza.topping;
	pizza.outputDescription();
	pizza.computePrice();

	return(0);
}

void PIZZA::outputDescription()
{
	switch (type)
	{
	case 0:
		cout << "\n\nThe type of the pizza is deep dish.\n";
		break;
	case 1:
		cout << "\n\nThe type of the pizza is hand tossed.\n";
		break;
	case 2:
		cout << "\n\nThe type of the pizza is pan.\n";
		break;
	}
	switch (size)
	{
	case 0:
		cout << "\nThe size of the pizza is small.\n";
		break;
	case 1:
		cout << "\nThe size of the pizza is medi