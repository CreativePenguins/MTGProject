//
//  player.cpp
//  MTG
//
//  Created by Tyler Pearson on 2/18/16.
//  Copyright © 2016 JandT. All rights reserved.
//

#include "player.h"
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>
#include <random>

// Filled constructor

Player::Player(std::string n) {
    name = n;
    life = 20;
    poison = 0;
}

// Empty constructor

Player::Player() {
    name = "Player";
    life = 20;
    poison = 0;
}

// Deconstructor
/*
 * This isn't something we need to worry about right now...
 */

// Accessors and mutators
// Library (Deck)
void Player::addCardDeck(std::string card) {
    deck.push_back(card);
}



void Player::drawCard() {
    if (!deck.empty()) {
        hand.push_back(deck.back());
        deck.pop_back();
    }
    else {
        std::cout << "Your deck is empty...\n";
    }
}



void Player::shuffleDeck() {
    std::random_shuffle(deck.begin(), deck.end());
}



// Hand
void Player::displayHand() {
    if (!hand.empty()) {
        std::cout << name << "'s hand contains the following:\n";
        for (std::vector<Card>::iterator it = hand.begin(); it != hand.end(); it++)
            std::cout << it->getName() << "\n";
    }
    else
        std::cout << "Your hand is empty...\n";
}