#ifndef card_h
#define card_h

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace::std;

class Card {
    
private:
	
	bool tap;
	bool flip;

	int power;
	int toughness;
	int loyalty;
   
    vector <string> colour;       // Obviously color
    map <string, int> mana;       // Mana type with key and value
	map <string, int> counter;    // Modifications on card. Vector l8r
	string name;                       // NAME
	string superType;                  // Card super type.
    string type;                       // Card sub-type
public:
    // Default Constructor
    Card();
    //Filled Constructor
    Card(string name);
	
    // Accessors
    string getName();
    void getCounters();
	string getKeywords(string Keyword);
	string getSuperType();
	string getType();
	bool isTap();           // Checks to see if card is tapped.
	bool isFlip();          // Checks to see if card is flipped.
	int getPower();         // Gets power level of card
	int getToughness();     // Gets toughness level.
	int getLoyalty();
    void getColors();
    void getMana();
    void displayAllInformation();


    // Mutators
    void setName(string x);
	void tapCard(bool x);
	void flipCard(bool x);
	void setPower(int x);
	void setToughness(int x);
    void addColour(string x);
    void addMana(string x, int y);
    void addCounter(string, int);
    void changeType(string x);
    void changeSuperType(string x);
    void setLoyalty(int x);
};

#endif

