#pragma once
#ifndef player_h
#define player_h
#include <iostream>
#include <string>
#include <vector>

class card
{
private:
	
	bool tap;
	bool flip;

	int power;
	int toughness;

	std::vector <std::string> colour;
	std::vector <std::string> Mana;
	std::vector <std::string> type;
	std::vector <std::string> counter;

public:
	// Constructors
	card();
	
	bool isTap();
	bool isFlip();

	int getPower();
	int getToughness();

	void tapCard();
	void flipCard();
	void setPower(int x);
	void setToughness(int x);
	void addColour(std::string x);
	void addMana();



};

#endif

