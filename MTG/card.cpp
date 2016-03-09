#include "card.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace::std;

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
Card::Card(string x) {
    name = x;
}

// Accessors
string Card::getName() {
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
        cout << name << " has the counter(s):\n";
        for (map<string, int>::iterator it = counter.begin(); it != counter.end(); it++)
            cout << it->first << " => " << it->second << '\n';
    } else
        cout << "No counters...\n";
}
void Card::getColors() {
    if (!colour.empty()) {
        cout << name << " has the color(s):\n";
        for (vector<string>::iterator it = colour.begin(); it != colour.end(); it++)
            cout << *it << "\n";
    } else
        cout << "No colors...\n";
}
void Card::getMana() {
    if (!mana.empty()) {
        cout << name << " has the following mana costs:\n";
        for (map<string, int>::iterator it = mana.begin(); it != mana.end(); it++)
            cout << it->first << it->second << "\n";
    } else
        cout << "No mana requirements...";
}
string Card::getSuperType() {
	return superType;
}
string Card::getType() {
	return type;
}
void Card::displayAllInformation() {
    Card::getName();
    Card::isTap();
    Card::isFlip();
    Card::getSuperType();
    Card::getType();
	//Card::getCounters();
	//Card::getKeywords();
    Card::getPower();
    Card::getToughness();
    Card::getColors();
    Card::getMana();
}

/********************************
 Mutators
 ********************************/
void Card::setName(string name) {
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
void Card::addColour(string color) {
    colour.push_back(color);
}
void Card::addMana(string color, int amt) {
    mana.insert(pair<string, int>(color, amt));
}
void Card::addCounter(string type, int amt) {
    counter.insert(pair< string, int>(type, amt));
}
void Card::changeType(string type) {
    this->type = type;
}
void Card::changeSuperType(string x) {
    this->type = x;
}
void Card::setLoyalty(int x) {
	this->loyalty = x;
}