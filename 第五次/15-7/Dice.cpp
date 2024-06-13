#include<cstdlib>
#include<iostream>
#include<string>
#include<ctime>
#include"Dice.h"
using namespace std;

namespace dice
{
	Dice::Dice()
	{
		numSides = 6;
		srand(time(NULL));
	}
	Dice::Dice(int numSides)
	{
		this->numSides = numSides;
		srand(time(NULL));
	}
	int Dice::rollDice() const
	{
		return (rand() % numSides) + 1;
	}
	int rollTwoDice(const Dice& die1, const Dice& die2)
	{
		return die1.rollDice() + die2.rollDice();
	}



	LoadedDice::LoadedDice() 
	{
		numSides = 6;
		srand(time(NULL));
	}
	LoadedDice::LoadedDice(int numSides)
	{
		this->numSides = numSides;
		srand(time(NULL));
	}
	int LoadedDice::rollDice() const
	{
		int ran = rand() % 100;
		if (ran < 50)
			return numSides;
		else
			return (rand() % numSides) + 1;
	}
}