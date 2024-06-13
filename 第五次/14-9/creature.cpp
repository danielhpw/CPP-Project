#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
#include"creature.h"
using namespace std;


namespace creature
{
	Creature::Creature() : strength(0), hitpoints(0), species("NO") {}
	Creature::Creature(int newStrength, int newHit) : strength(newStrength), hitpoints(newHit), species("NO") {}
	int Creature::getDamage() const 
	{
		int damage = (rand() % getStrength()) + 1;
		cout << " Total damage: " << damage << endl;
		return damage;
	}
	int Creature::getStrength() const { return strength; }
	int Creature::getHitpoints() const { return hitpoints; }
	string Creature::getSpecies() const { return species; }
	void Creature::setStrength(int newStrength) { strength = newStrength; }
	void Creature::setHitpoints(int newHit) { hitpoints = newHit; }
	void Creature::setSpecies(string newSpecies) { species = newSpecies; }

	Demon::Demon() : Creature() { setSpecies("Demon"); }
	Demon::Demon(int newStrength, int newHit) : Creature(newStrength, newHit) { setSpecies("Demon"); }
	int Demon::getDamage() const 
	{
		int damage = (rand() % getStrength()) + 1;
		if ((rand() % 100) < 5)
		{
			damage = damage + 50;
			cout << " Demon Attack! 50 damge addition!" << endl;
		}
		cout << " Total damage:" << damage << endl;
		return damage;
	}

	Elf::Elf() : Creature() { setSpecies("Elf"); }
	Elf::Elf(int newStrength, int newHit) : Creature(newStrength, newHit) { setSpecies("Elf"); }
	int Elf::getDamage() const 
	{
		int damage = (rand() % getStrength()) + 1;
		if ((rand() % 10) == 0) {
			cout << " Elf magic! Double damage!" << endl;
			damage = damage * 2;
		}
		cout << " Total damage:" << damage << endl;
		return damage;
	}

	Human::Human() : Creature() {
		setStrength(10);
		setHitpoints(10);
		setSpecies("Human");
	}
	Human::Human(int newStrength, int newHit) : Creature(newStrength, newHit) 
	{
		setStrength(newStrength);
		setHitpoints(newHit);
		setSpecies("Human");
	}

	Balrog::Balrog() : Demon() { setSpecies("Balrog"); }
	Balrog::Balrog(int newStrength, int newHit) : Demon(newStrength, newHit) { setSpecies("Balrog"); }
	int Balrog::getDamage() const 
	{
		int damage1 = (rand() % getStrength()) + 1;

		int damage2 = (rand() % getStrength()) + 1;
		cout << " Balrog can attack twice!" << endl;
		if ((rand() % 100) < 5)
		{
			damage1 = damage1 + 50;
			cout << " Demon Attack! 50 damge addition!" << endl;
		}
		cout << " Damage 1: " << damage1 << endl;
		if ((rand() % 100) < 5)
		{
			damage2 = damage2 + 50;
			cout << " Demon Attack! 50 damge addition!" << endl;
		}
		cout << " Damage 2: " << damage2 << endl;
		return damage1 + damage2;
	}
	Cyberdemon::Cyberdemon() : Demon() { setSpecies("Cyberdemon"); }
	Cyberdemon::Cyberdemon(int newStrength, int newHit) : Demon(newStrength, newHit) { setSpecies("Cyberdemon"); }
}