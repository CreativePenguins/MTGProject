#include "card.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>


// Constructors
// Empty
Card::Card() {
    name = "NULL";
    tap = NULL;
    flip = NULL;
    power = NULL;
    toughness = NULL;
}
// Filled
Card::Card(std::string x) {
    name = x;
}

// Accessors
std::string Card::getName() {
    return name;
}
bool Card::isTap() {
    return tap;
}
bool Card::isFlip() {
    return flip;
}
int Card::getPower() {
    return power;
}
int Card::getToughness() {
    return toughness;
}
void Card::getCounters(){
    if (!counter.empty()) {
        std::cout << name << " has the counters:\n";
        for (std::map<std::string, int>::iterator it = counter.begin(); it != counter.end(); it++)
            std::cout << it->first << it->second << "\n";
    }
    else
        std::cout << "No counters...";
}
