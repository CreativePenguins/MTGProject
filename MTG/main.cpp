//
//  main.cpp
//  MTG
//
//  Created by Tyler Pearson & Julien Vachon on 2/12/16.
//  Copyright © 2016 JandT. All rights reserved.
//

#include "player.h"		//Intializes player
#include "Beginning.h"	//
//#include ""

#include <iostream>
#include <vector>
#include <string>

int Game()
{

	Beginning Bo;

}

int main() {

	std::vector<Player> name;
	int plCt; // player count intializer


	std::cout << "How many players do you have? "; // asks player how many people are there
	std::cin >> plCt; // inputs player count response

	while (plCt > 6)  // while loop forces player to reinput number if it's above acceptable levels.
	{
		std::cout << "You have too many players,\nplease enter a value less than 6... ";
		std::cin >> plCt; //inputs the new response into player count
	}
	for (int i = 1; i <= plCt; i++) // for loop increments a list containing string names.
	{
		std::string x; //init string x
		std::cout << "Please enter player " << i << "'s name."; //asks name input, calls i to reference which player.
		std::cin >> x; // inputs string into x
		name.push_back(Player(x)); //moves on to the next string in the player vector?
	}

	for (int i = 1; i <= plCt; i++) {

		std::vector<std::string>::iterator it;
		it = name.begin(i); 
		it != name.end(i);

		Player name; //calls player name


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