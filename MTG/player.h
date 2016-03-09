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


class Player {
private:
    std::string name;
    
    std::vector<Card> deck;     // Cards in library
	std::vector<Card> grave;     // Cards in library
    std::vector<Card> hand;     // Cards in hand
    std::vector<Card> exile;    // Cards in exile
    std::vector<Card> field;    // Cards on field
    std::vector<Card> cmdS;     // Card(s) in command slot
    
    std::map<std::string,int> mana;      // Types of avail. mana
    
    int life;                   // Life counter
    int poison;                 // Poison counter
    
public:
    // Constructors
    Player();
    Player(std::string n);
    
    // Deconstructor
    //~Player();
    
    // Accessors and mutators
    // Library(Deck)
    void addCardDeck(std::string card);
    void drawCard();
    void shuffleDeck();
	void boardInit();


    // Hand
    void displayHand();

	// Board Display
	void displayPlayerBoard(); //Display 
};

#endif /* player_h */
