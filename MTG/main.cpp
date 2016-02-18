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
        
    Player tyler("Tyler");
    for (int i = 0; i<60; i++) {
        tyler.addCardDeck(std::to_string(i));
    }
    tyler.shuffleDeck();
    for (int i = 0; i<60; i++) {
        tyler.drawCard();
    }
    tyler.displayHand();
    
    Player jay("Jay");
    for (int i = 0; i<60; i++) {
        jay.addCardDeck(std::to_string(i));
    }
    jay.shuffleDeck();
    for (int i = 0; i<60; i++) {
        jay.drawCard();
    }
    jay.displayHand();
    
}
