//
//  player.h
//  MTG
//
//  Created by Tyler Pearson on 2/14/16.
//  Copyright © 2016 JandT. All rights reserved.
//

#ifndef player_h
#define player_h

#include <iostream>
#include <string>
#include <vector>
#include "card.h"
#include <map>

using namespace::std;

class Player {
private:
    string name;
    
    vector<Card> deck;     // Cards in library
	vector<Card> grave;     // Cards in library
    vector<Card> hand;     // Cards in hand
    vector<Card> exile;    // Cards in exile
    vector<Card> field;    // Cards on field
    vector<Card> cmdS;     // Card(s) in command slot
    
    map<string,int> mana;      // Types of avail. mana
    
    int life;                   // Life counter
    int poison;                 // Poison counter
    
public:
    // Constructors
    Player();
    Player(string n);
    
    // Deconstructor
    //~Player();
    
    // Accessors and mutators
    // Library(Deck)
    void addCardDeck(string card);
    void drawCard();
    void shuffleDeck();
	void boardInit();


    // Hand
    void displayHand();

	// Board Display
	void displayPlayerBoard(); //Display 
};

#endif /* player_h */
