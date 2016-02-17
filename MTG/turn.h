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
#include <vector>
#include <algorithm>
#include <random>

class Turn {
public:
    
    // Stuff needed for super: deck, hand, field, mana, life, poison ctr, token, exile, cmd slot
    
    // Attributes TODO add tokens --> maybe just add it to the cards on the field (bool?)
    std::vector<std::string> deck; // Was going to change it to stack, but leave it as list so we can pull other stuff.
    std::vector<std::string> hand;
    std::vector<std::string> field;
    std::vector<int> mana;
    int life;
    int psn;
    std::vector<std::string> exile;
    std::vector<std::string> cmdS;
    std::vector<std::string> counter;
    
    
    // Accessors and Mutators
    
    // Library(deck) stuff
    void addCardDeck(std::string card) { // This will add cards the back of the deck
        deck.push_back(card);
    }
    void drawCard() { // This will take the top of the deck and put it in your hand and remove it from the deck.
        if (!deck.empty()){
            hand.push_back(deck.back());
            deck.pop_back();
        }
        else {
            std::cout << "Your deck is empty...\n";
        }
        
    }
    void shuffleDeck() {
        auto engine = std::default_random_engine{};
        std::shuffle(deck.begin(), deck.end(), engine);
    }
    
    // Hand stuff
    void displayHand() {
        if (!hand.empty()){
            std::cout << "Your hand contains the following:\n";
            for (std::vector<std::string>::iterator it=hand.begin(); it != hand.end(); it++)
                std::cout << *it << "\n";
        }
        else if (hand.empty())
            std::cout << "Your hand is empty...\n";
        
    }
    
};


#endif /* turn_h */
