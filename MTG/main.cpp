//
//  main.cpp
//  MTG
//
//  Created by Tyler Pearson & Julien Vachon on 2/12/16.
//  Copyright © 2016 JandT. All rights reserved.
//

#include <iostream>
#include "turn.h"

int main() {
        
    Turn player1;
    player1.addCardDeck("Firey pits of hell");
    player1.addCardDeck("Gates of Hades");
    player1.addCardDeck("The one");
    player1.addCardDeck("Destruction");
    player1.drawCard();
    player1.drawCard();
    player1.drawCard();
    player1.drawCard();
    player1.displayHand();
    
}
