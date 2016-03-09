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

using namespace::std;

// Filled constructor

Player::Player(string n) {
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
void Player::addCardDeck(string card) {
    deck.push_back(card);
}



void Player::drawCard() {
    if (!deck.empty()) {
        hand.push_back(deck.back());
        deck.pop_back();
    }
    else {
        cout << "Your deck is empty...\n";
    }
}



void Player::shuffleDeck() {
    random_shuffle(deck.begin(), deck.end());
}



// Hand
void Player::displayHand() {
    if (!hand.empty()) {
        cout << name << "'s hand contains the following:\n";
        for (vector<Card>::iterator it = hand.begin(); it != hand.end(); it++)
            cout << it->getName() << "\n";
    }
    else
        cout << "Your hand is empty...\n";
}

//Displays the players field and hand in a callable

void Player::displayPlayerBoard() {
	
	/*
	 * Change this later to make it *prettier*, meaning GUI.
	 */

	cout << "\t\t\t\t\t\t\t\t\t\t" << "|CS: " << cmdS.size() << "| \n";

	int x = 0;
	string land = "Land";

	for (vector<Card>::iterator it = field.begin(); it != field.end(); it++){
		if (it->getType() != land) {
			cout << "|F" << x << ": " << it->getName() << "|\t";
			x++;
		}
	}

	cout << "\n";
	x = 0;

	for (vector<Card>::iterator it = field.begin(); it != field.end(); it++) {
		if (it->getType() == land) {
			cout << "|L" << x << ": " << it->getName() << "|\t";
			x++;
		}
	}

	cout << "\n____________________________________________ \n";
	x = 0;

		cout <<"\t\t\t\t\t\t\t\t\t\t |D: "<< deck.size() << "| |G:	" << grave.size() << "| |E: " << exile.size() << "|\n" ;

	for (vector<Card>::iterator it = hand.begin(); it != hand.end(); it++){
		cout << "|H" << x << ": " << it->getName() << "|\t";
		x++;
	}


}