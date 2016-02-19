//
//  main.cpp
//  MTG
//
//  Created by Tyler Pearson & Julien Vachon on 2/12/16.
//  Copyright © 2016 JandT. All rights reserved.
//

#include <iostream>
#include "player.h"
#include <string>


int main() {

	int plCt;
	std::string name;

	std::cout << "How many players do you have? ";
	std::cin >> plCt;
	while (plCt > 4) {
		std::cout << "You have too many players,\nplease enter a value less than 6... ";
		std::cin >> plCt;
	}

	if (plCt >= 1) {
		std::cout << "Please enter a name for player 1: ";
		std::cin >> name;
		Player player1(name);
		if (plCt >= 2) {
			std::cout << "Please enter a name for player 2: ";
			std::cin >> name;
			Player player2(name);
			if (plCt >= 3) {
				std::cout << "Please enter a name for player 3: ";
				std::cin >> name;
				Player player3(name);
				if (plCt == 4) {
					std::cout << "Please enter a name for player 4: ";
					std::cin >> name;
					Player player4(name);

				}
			}
		}
	}
	
	for (int i = 0; i < 60; i++) {
		
	}

/*    Player tyler("Tyler");                    // Creates the player named Tyler
    for (int i = 0; i<60; i++) {
        tyler.addCardDeck(std::to_string(i)); // Will create cards from 0 to 59 to put in deck.
    }
    tyler.shuffleDeck();
    for (int i = 0; i<60; i++) {
        tyler.drawCard();                     // Draws the 60 cards from deck to hand.
    }
    tyler.displayHand();                      // Displays the hand of the player.
    
    Player jay("Jay");
    for (int i = 0; i<60; i++) {
        jay.addCardDeck(std::to_string(i));   // See notes above.
    }
    jay.shuffleDeck();
    for (int i = 0; i<60; i++) {
        jay.drawCard();
    }
    jay.displayHand();
*/    
}
