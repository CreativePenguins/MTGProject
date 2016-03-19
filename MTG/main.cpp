//
//  main.cpp
//  MTG
//
//  Created by Tyler Pearson & Julien Vachon on 2/12/16.
//  Copyright © 2016 JandT. All rights reserved.
//

#include "player.h"		//Intializes player
#include "game.h"
#include "card.h"
#include "DBHelper.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <stdio.h>

#include <sqlite3.h>

int main() {
    
    DBHelper connection;
    
    connection.setDBLocation("/Users/Tyler/Dropbox/Documents/Code/MTGProject/Database/Cards.db");
    connection.setSQLStatment("Select * from Cards where id='2'");
    connection.execSQL();
    
	game game;
	int x = 0;

    std::cout << __DATE__ << std::endl;
    std::cout << "Welcome to Frameworks Pre-Alpha\n";
    std::cout << "*********************************************\n";
	std::cout << "Please select one of the following options:\n";
	std::cout << "\tTo start a game, type 1\n";
	std::cout << "\tTo build a deck, type 2\n";
	std::cout << "\tTo edit your profile, type 3\n";
	std::cout << "\tTo change your settings, type 4\n";
	std::cout << "\tTo exit, type 5\n";

	std::cin >> x;
    
    /***
     Checks 'x' to make sure it's a valid int.
     ***/
    
    while (std::cin.fail()) {
        std::cout << "Please enter a valid number!\n";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> x;
    }

    /***
     Checks input to make sure that 'x' is a valid selection
     ***/
    
	while (x < 1 || x > 5) {
		std::cout << x << " is not a valid selection, please enter a value 1-5\n";
		std::cin >> x;
        while (std::cin.fail()) {
            std::cout << "Please enter a valid number!\n";
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> x;
        }
	}
	
	switch (x) {
	case 1:
		game.regular();
            break;
	case 2:
		std::cout << "Unimplemented\n"; // placeholder
            break;
	case 3:
		std::cout << "Unimplemented\n"; // placeholder
            break;
	case 4:
		std::cout << "Unimplemented\n"; // placeholder
            break;
	case 5:
		return 0;
            break;
	default:
		std::cout << "That is not a valid selection\n";
            break;
	}
}