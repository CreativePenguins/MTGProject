#ifndef card_h
#define card_h

#include <iostream>
#include <string>
#include <vector>
#include <map>

class Card {
private:
	
	bool tap;
	bool flip;

	int power;
	int toughness;

    std::string name;                       // NAME
    std::vector <std::string> colour;       // Obviously color
    std::map <std::string, int> mana;       // Mana type with key and value
    std::string superType;                  // Card super type.
    std::string type;                       // Card sub-type
    std::map <std::string, int> counter;    // Modifications on card.
    std::string keywords;

public:
    // Default Constructor
    Card();
    //Filled Constructor
    Card(std::string name);
	
    // Accessors
    std::string getName();
	bool isTap();           // Checks to see if card is tapped.
	bool isFlip();          // Checks to see if card is flipped.
	int getPower();         // Gets power level of card
	int getToughness();     // Gets toughness level.
    std::string getCounters();
    std::string getColors();
    std::string getMana();
    std::string getSuperType();
    std::string getType();
    std::string displayAllInformation();


    // Mutators
    void setName(std::string x);
	void tapCard();
	void flipCard();
	void setPower(int x);
	void setToughness(int x);
    void addColour(std::string x);
    void addMana(std::string x, int y);
    void changeType(std::string x);
    void changeSuperType(std::string x);};

#endif

