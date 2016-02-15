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
    
    //Attributes TODO add tokens --> maybe just add it to the cards on the field (bool?)
    std::list<std::string> deck;
    std::list<std::string> hand;
    std::list<std::string> field;
    std::list<int> mana;
    int life;
    int psn;
    std::list<std::string> exile;
    std::list<std::string> cmdS;
    std::list<std::string> counter;
    
    //Accessors and Mutators
    
};


#endif /* turn_h */
