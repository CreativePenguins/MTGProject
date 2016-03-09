//
//  counter.cpp
//  MTG
//
//  Created by Tyler Pearson on 3/8/16.
//  Copyright © 2016 JandT. All rights reserved.
//

#include "counter.hpp"
#include <string>
#include <iostream>

using namespace::std;

/*****************************
 Constructors
 *****************************/
Counter::Counter(){
    effectNum = NULL;
    effectType = "NULL";
    desc = "NULL";
}
Counter::Counter(int num, string type, string desc){
    effectNum = num;
    effectType = type;
    this->desc = desc;
}

/*****************************
 Accessors
 *****************************/

int Counter::getEffNum(){
    return effectNum;
}
string Counter::getEffType(){
    return effectType;
}
string Counter::getDesc(){
    return desc;
}

/*****************************
 Mutators
 *****************************/
void Counter::setEffNum(int x){
    effectNum = x;
}
void Counter::setEffType(string x){
    effectType = x;
}
void Counter::setDesc(string x){
    desc = x;
}