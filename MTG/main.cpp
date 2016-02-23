//
//  main.cpp
//  MTG
//
//  Created by Tyler Pearson & Julien Vachon on 2/12/16.
//  Copyright © 2016 JandT. All rights reserved.
//

#include "player.h"
#include "Beginning.h"
//#include ""

#include <iostream>
#include <vector>
#include <string>

std::vector<Player> name;

int Game()
{

	Beginning Bo;

}

int main() {

	int plCt;
	std::cout << "How many players do you have? ";
	std::cin >> plCt;

	while (plCt > 4)
	{
		std::cout << "You have too many players,\nplease enter a value less than 6... ";
		std::cin >> plCt;
	}
	for (int i = 1; i <= plCt; i++)
	{
		std::string x;
		std::cout << "Please enter player " << i << "'s name.";
		std::cin >> x;
		name.push_back(Player(x));
	}

	for (int i = 1; i <= plCt; i++) {

		Player name;


		for (int i = 0; i < 60; i++) {
			name.addCardDeck(std::to_string(i)); // Will create cards from 0 to 59 to put in deck.
		}

		for (int i = 0; i < 60; i++) {
			name.addCardDeck(std::to_string(i)); // Will create cards from 0 to 59 to put in deck.
		}

		name.shuffleDeck();
		for (int i = 0; i < 60; i++) {
			name.drawCard();                     // Draws the 60 cards from deck to hand.
		}

		name.displayHand();
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









}
