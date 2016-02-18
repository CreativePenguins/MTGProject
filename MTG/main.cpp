//
//  main.cpp
//  MTG
//
//  Created by Tyler Pearson & Julien Vachon on 2/12/16.
//  Copyright © 2016 JandT. All rights reserved.
//

#include <iostream>
#include "player.cpp"

int main() {
        
    Player tyler("Tyler");                    // Creates the player named Tyler
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
    
}
