//
//  turn.h
//  MTG
//
//  Created by Tyler Pearson on 2/14/16.
//  Copyright © 2016 JandT. All rights reserved.
//

#ifndef turn_h
#define turn_h

#include <iostream>
#include <string>
#include <list>

class Turn {
public:
    Turn();
    
    //Stuff needed for super: deck, hand, field, mana, life, poison ctr, token, exile, cmd slot
    
    std::list<std::string> deck;
    
};


#endif /* turn_h */
