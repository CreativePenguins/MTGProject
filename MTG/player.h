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
#include <list>
#include <vector>
#include <algorithm>
#include <random>

class Player {
private:
    
    // Stuff needed for super: deck, hand, field, mana, life, poison ctr, token, exile, cmd slot
    
    // Attributes TODO add tokens --> maybe just add it to the cards on the field (bool?)
    std::vector<std::string> deck; // Was going to change it to stack, but leave it as list so we can pull other stuff.
    std::vector<std::string> hand;
    std::vector<std::string> field;
    std::vector<std::string> exile;
    std::vector<std::string> cmdS;
    std::vector<std::string> counter;
	std::vector<int> mana;

	int life = 20;
	int psn = 0;

	std::string name;
    
public:   
    // Accessors and Mutators
    
    // Constuctor
    Player() {
        name = "Player";
    }
    Player(std::string n) {
        name = n;
    }
    
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
        auto engine = std::default_random_engine{};			// Needs seed.
        std::shuffle(deck.begin(), deck.end(), engine);		//possible memory leak.
    }
    
    // Hand stuff
    void displayHand() {
        if (!hand.empty()){
            std::cout << name << "'s hand contains the following:\n";
            for (std::vector<std::string>::iterator it=hand.begin(); it != hand.end(); it++)
                std::cout << *it << "\n";
        }
        else if (hand.empty())
            std::cout << "Your hand is empty...\n";
    }
    
};


#endif /* player_h */
