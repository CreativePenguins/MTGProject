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
void Card::getColors() {
    if (!colour.empty()) {
        std::cout << name << " has the color(s):\n";
        for (std::vector<std::string>::iterator it = colour.begin(); it != colour.end(); it++)
            std::cout << *it << "\n";
    } else
        std::cout << "No colors...\n";
}
void Card::getMana() {
    if (!mana.empty()) {
        std::cout << name << " has the following mana costs:\n";
        for (std::map<std::string, int>::iterator it = mana.begin(); it != mana.end(); it++)
            std::cout << it->first << it->second << "\n";
    } else
        std::cout << "No mana requirements...";
}
void Card::getSuperType() {
    std::cout << name << " has the super type: " << superType << ".";
}
void Card::getType() {
    std::cout << name << " has the sub type: " << type << ".";
}
void Card::displayAllInformation() {
    Card::getName();
    Card::isTap();
    Card::isFlip();
    Card::getSuperType();
    Card::getType();
    Card::getPower();
    Card::getToughness();
    Card::getColors();
    Card::getMana();
}
