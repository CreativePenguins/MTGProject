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
	loyalty = NULL;
}
// Filled
Card::Card(std::string x) {
    name = x;
}

/********************************
 Accessors
 ********************************/
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
int Card::getLoyalty() {
	return loyalty;
}
void Card::getCounters() {
    if (!counter.empty()) {
        std::cout << name << " has the counter(s):\n";
        for (std::map<std::string, int>::iterator it = counter.begin(); it != counter.end(); it++)
            std::cout << it->first << " => " << it->second << '\n';
    } else
        std::cout << "No counters...\n";
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

/********************************
 Mutators
 ********************************/
void Card::setName(std::string name) {
    this->name = name;
}
void Card::tapCard(bool x) {
    this->tap = x;
}
void Card::flipCard(bool x) {
    this->flip = x;
}
void Card::setPower(int x) {
    this->power = x;
}
void Card::setToughness(int x) {
    this->toughness = x;
}
void Card::addColour(std::string color) {
    colour.push_back(color);
}
void Card::addMana(std::string color, int amt) {
    mana.insert(std::pair<std::string, int>(color, amt));
}
void Card::addCounter(std::string type, int amt) {
    counter.insert(std::pair<std:: string, int>(type, amt));
}
void Card::changeType(std::string type) {
    this->type = type;
}
void Card::changeSuperType(std::string x) {
    this->type = x;
}
void Card::setLoyalty(int x) {
    this->loyalty = x;
}
