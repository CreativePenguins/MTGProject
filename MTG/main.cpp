//
//  main.cpp
//  MTG
//
//  Created by Tyler Pearson & Julien Vachon on 2/12/16.
//  Copyright © 2016 JandT. All rights reserved.
//

#include <iostream>
#include "turn.h"
#include <string>

int main() {
        
    Turn player1;
    for (int i = 0; i<60; i++) {
        player1.addCardDeck(std::to_string(i));
    }
    player1.shuffleDeck();
    for (int i = 0; i<60; i++) {
        player1.drawCard();
    }
    player1.displayHand();
    
}
