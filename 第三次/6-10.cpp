#include<iostream>
#include<cstdlib>
using namespace std;

class Weight
{
public:
	Weight();
	void input();
	void output();
	void setWeightPounds();
	void setWeightKilograms();
	void setWeightOunces();
	double getWeightPounds();
	double getWeightKilograms();
	double getWeightOunces();
private:
	double weight;
	double WeightPounds;
	double WeightKilograms;
	double WeightOunces;
};

int main(void)
{
	Weight first;
	cout << "Enter the weight:";
	first.input();
	first.output();
	return(0);
}

Weight::Weight() :weight(1), WeightPounds(1), WeightKilograms(1), WeightOunces(1)
{}

void Weight::input()
{
	cout << "\nYour weight is ";
	cin >> weight;
	setWeightPounds();
	setWeightKilograms();
	setWeightOunces();
}

void Weight::setWeightPounds()
{
	WeightPounds = weight;
}

void Weight::setWeightKilograms()
{
	WeightKilograms = weight / 2.21;
}

void Weight::setWeightOunces()
{
	WeightOunces = weight * 16;
}

double Weight::getWeightPounds()
{
	return(WeightPounds);
}

double Weight::getWeightKi