//
//  DBHelper.hpp
//  MTG
//
//  Created by Tyler Pearson on 3/17/16.
//  Copyright © 2016 JandT. All rights reserved.
//

#ifndef DBHelper_hpp
#define DBHelper_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <sqlite3.h>

class Connection{
private:
    sqlite3 *db;
    sqlite3_stmt *res;
    
    const char *errMSG;
    const char *tail;
    int error = sqlite3_open("Cards.db", &db);
    
public:
    
};

#endif /* DBHelper_hpp */
