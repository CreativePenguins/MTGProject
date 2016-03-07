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
	int loyalty;
   
    std::vector <std::string> colour;       // Obviously color
    std::map <std::string, int> mana;       // Mana type with key and value
	std::map <std::string, int> counter;    // Modifications on card. Vector l8r
	std::string name;                       // NAME
	std::string superType;                  // Card super type.
    std::string type;                       // Card sub-type
public:
    // Default Constructor
    Card();
    //Filled Constructor
    Card(std::string name);
	
    // Accessors
    std::string getName();
    void getCounters();
	std::string getKeywords(std::string Keyword);
	bool isTap();           // Checks to see if card is tapped.
	bool isFlip();          // Checks to see if card is flipped.
	int getPower();         // Gets power level of card
	int getToughness();     // Gets toughness level.
	int getLoyalty();
    void getColors();
    void getMana();
    void getSuperType();
    void getType();
    void displayAllInformation();


    // Mutators
    void setName(std::string x);
	void tapCard(bool x);
	void flipCard(bool x);
	void setPower(int x);
	void setToughness(int x);
    void addColour(std::string x);
    void addMana(std::string x, int y);
    void addCounter(std::string, int);
    void changeType(std::string x);
    void changeSuperType(std::string x);
    void setLoyalty(int x);
};

#endif

