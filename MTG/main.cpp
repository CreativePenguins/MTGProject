//
//  main.cpp
//  MTG
//
//  Created by Tyler Pearson on 2/12/16.
//  Copyright © 2016 JandT. All rights reserved.
//

#include <iostream>

int main() {
    std::cout << "Please enter a number...";
    int x;
    std::cin >> x;
    for (int i = 0; i!=x; i++) {
        std::cout << i << ": Hello\n";
    }
}
