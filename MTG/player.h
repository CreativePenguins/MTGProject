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


class Player {
private:
    std::string name;
    
    std::vector<std::string> deck;     // Cards in library
    std::vector<std::string> hand;     // Cards in hand
    std::vector<std::string> exile;    // Cards in exile
    std::vector<std::string> field;    // Cards on field
    std::vector<std::string> cmdS;     // Card(s) in command slot
    
    std::vector<int> mana;             // Types of avail. mana
    
    int life;                          // Life counter
    int poison;                        // Poison counter
    
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
    
    // Hand
    void displayHand();
};

#endif /* player_h */
