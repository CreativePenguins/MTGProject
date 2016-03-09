//
//  counter.hpp
//  MTG
//
//  Created by Tyler Pearson on 3/8/16.
//  Copyright © 2016 JandT. All rights reserved.
//

#ifndef counter_hpp
#define counter_hpp

#include <iostream>
#include <string>

/*
 * Power counter, touhgness, nondescript -> player added action.
 */

using namespace::std;

class Counter {
private:
    
    int effectNum;      // This will be the number that actually affects the tough/power.
    string effectType;  // This will be the type: i.e. Toughness, Power, Nondescript.
    string desc;        // Obviously the description.
    
public:
    
    /*****************************
     Constructors
     *****************************/
    Counter();
    Counter(int num, string type, string desc);
    
    /*****************************
     Accessors
     *****************************/
    int getEffNum();
    string getEffType();
    string getDesc();
    
    /*****************************
     Mutators
     *****************************/
    void setEffNum(int x);
    void setEffType(string x);
    void setDesc(string x);
    
    
};

#endif /* counter_hpp */
