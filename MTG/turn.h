//
//  turn.h
//  MTG
//
//  Created by Tyler Pearson on 2/14/16.
//  Copyright © 2016 JandT. All rights reserved.
//

#ifndef turn_h
#define turn_h

#include <iostream>
#include <string>
#include <list>

class Turn {
public:
    
    // Stuff needed for super: deck, hand, field, mana, life, poison ctr, token, exile, cmd slot
    
    // Attributes TODO add tokens --> maybe just add it to the cards on the field (bool?)
    std::list<std::string> deck; // Was going to change it to stack, but leave it as list so we can pull other stuff.
    std::list<std::string> hand;
    std::list<std::string> field;
    std::list<int> mana;
    int life;
    int psn;
    std::list<std::string> exile;
    std::list<std::string> cmdS;
    std::list<std::string> counter;
    
    // Accessors and Mutators
    
    // Library(deck) stuff
    void addCardDeck(std::string card) { // This will add cards the back of the deck
        deck.push_back(card);
    }
    void drawCard() { // This will take the top of the deck and put it in your hand and remove it from the deck.
        if (!deck.empty()){
            hand.push_back(deck.front());
            deck.pop_front();
        }
        else {
            std::cout << "Your deck is empty...\n";
        }
        
    }
    
    // Hand stuff
    void displayHand() {
        if (!hand.empty()){
            std::cout << "Your hand contains the following:\n";
            for (std::list<std::string>::iterator it=hand.begin(); it != hand.end(); it++)
                std::cout << *it << "\n";
        }
        else if (hand.empty())
            std::cout << "Your hand is empty...\n";
        
    }
    
};


#endif /* turn_h */
