//
//  main.cpp
//  MTG
//
//  Created by Tyler Pearson & Julien Vachon on 2/12/16.
//  Copyright © 2016 JandT. All rights reserved.
//

#include "player.h"		//Intializes player
#include "game.h"
#include "card.h"
#include <iostream>
#include <vector>
#include <string>



int main() {
	game game;
	int x = 0;

	std::cout << "Welcome to Frameworks Pre-Alpha";
	std::cout << "Please select one of the following options:	\n";
	std::cout << "To start a game, type 1 \n";
	std::cout << "To build a deck, type 2 \n";
	std::cout << "To edit your profile, type 3 \n";
	std::cout << "To change your settings, type 4 \n";
	std::cout << "To exit, type 5 \n";

	std::cin >> x;

	while (x < 1 || x > 5) {				// Goes through input until it's a valid selection
		std::cout << "That is not a valid selection, please enter a valid selection\n";
		std::cin >> x;
	}
	
	switch (x) {
	case 1:
		game.regular();
            break;
	case 2:
		std::cout << "Unimplemented\n"; // placeholder
            break;
	case 3:
		std::cout << "Unimplemented\n"; // placeholder
            break;
	case 4:
		std::cout << "Unimplemented\n"; // placeholder
            break;
	case 5:
		return 0;
            break;
	default:
		std::cout << "That is not a valid selection\n";
            break;
	}
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
/*
 int Game()
 {
 
	Beginning Bo;
 
 }
 */