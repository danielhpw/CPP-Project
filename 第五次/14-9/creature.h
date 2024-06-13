#ifndef creature_H
#define creature_H
#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
#include<time.h>
using namespace std;


namespace creature
{
	class Creature 
	{
	public:
		Creature();
		Creature(int newStrength, int newHit);
		int getDamage() const;
		int getStrength() const;
		int getHitpoints() const;
		string getSpecies() const;
		void setStrength(int newStrength);
		void setHitpoints(int newHit);
		void setSpecies(string newSpecies);
	private:
		int strength;
		int hitpoints;
		string species;
	};

	class Demon : public Creature 
	{
	public:
		Demon();
		Demon(int newStrength, int newHit);
		int getDamage() const;
	};

	class Elf : public Creature 
	{
	public:
		Elf();
		Elf(int newStrength, int newHit);
		int getDamage() const;
	};

	class Human : public Creature 
	{
	public:
		Human();
		Human(int newStrength, int newHit);
	};

	class Balrog : public Demon 
	{
	public:
		Balrog();
		Balrog(int newStrength, int newHit);
		int getDamage() const;
	};

	class Cyberdemon : public Demon 
	{
	public:
		Cyberdemon();
		Cyberdemon(int newStrength, int newHit);
	};

}


#endif // !creature_H
