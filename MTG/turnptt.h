//
//  turn.h
//  MTG
//
//  Created by Tyler Pearson on 2/14/16.
//  Copyright © 2016 JandT. All rights reserved.
//

#ifndef turnptt_h
#define turnptt_h

#include <iostream>
#include <string>
#include <vector>
//#include <algorithm>
//#include <random>

class Turnptt {

private:
    
    // Stuff needed for super: deck, hand, field, mana, life, poison ctr, token, exile, cmd slot

    // Attributes TODO add tokens --> maybe just add it to the cards on the field (bool?)
	// Addendum: Tokens are special in that they go into the graveyard to activate effects, then are effectively exiled. So part of field but needs an identifier.
    std::vector<std::string> deck; // Was going to change it to stack, but changed it to a vector so we can pull other stuff and randomize it.
    std::vector<std::string> hand;
    std::vector<std::string> field;
    std::vector<int> mana;
    int life;
    int psn;
	int grbg;
    std::vector<std::string> exile;
    std::vector<std::string> cmdS;
    std::vector<std::string> counter;
    
public:
    // Accessors and Mutators

//	std::random_shuffle(deck.begin(), deck.end());     // Gave up on trying to make this work tonight, it requires algorithim and random libraries.

    // Library(deck) stuff
    void addCardDeck(std::string card) { // This will add cards the back of the deck
        deck.push_back(card);
    }
    void drawCard() { // This will take the top of the deck and put it in your hand and remove it from the deck.
        if (!deck.empty()){
            hand.push_back(deck.front());
            deck.erase(deck.begin());
        }
        else {
            std::cout << "Your deck is empty...\n";
        }
        
    }
    
    // Hand stuff
    void displayHand() {
        if (!hand.empty()){
            std::cout << "Your hand contains the following:\n";
            for (std::vector<std::string>::iterator it=hand.begin(); it != hand.end(); it++)
                std::cout << *it << "\n";
				std::cin >> grbg;
        }
        else if (hand.empty())
            std::cout << "Your hand is empty...\n";
        
    }
    
};


#endif /* turn_h */
