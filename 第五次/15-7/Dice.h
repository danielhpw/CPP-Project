#ifndef dice_H
#define dice_H
#include<cstdlib>
#include<iostream>
#include<string>
#include<ctime>
using namespace std;
namespace dice
{
	class Dice
	{
	public:
		Dice();
		Dice(int numSides);
		virtual int rollDice() const;
	protected:
		int numSides;
	};

	class LoadedDice : public Dice
	{
	public:
		LoadedDice();
		LoadedDice(int numSides);
		int rollDice() const override;
	};
	int rollTwoDice(const Dice& die1, const Dice& die2);
}




#endif // !dice_H
