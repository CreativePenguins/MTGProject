//
//  DBHelper.hpp
//  MTG
//
//  Created by Tyler Pearson on 3/17/16.
//  Copyright © 2016 JandT. All rights reserved.
//

#ifndef DBHelper_hpp
#define DBHelper_hpp

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>

class DBHelper{
private:
    sqlite3 *db;
    char * zErrMsg = 0;
    int rc;
    char *sql;
    const char* data = "Callback funciton called";
    char *location;
    
public:
    void setDBLocation(char *database);
    void openConnection();
    void setSQLStatment(char *stmt);
    void execSQL();
    static int callback(void *data, int argc, char **argv, char **azColName);
    void closeSQL();
};

#endif /* DBHelper_hpp */
