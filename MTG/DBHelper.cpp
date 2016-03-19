//
//  DBHelper.cpp
//  MTG
//
//  Created by Tyler Pearson on 3/17/16.
//  Copyright © 2016 JandT. All rights reserved.
//

#include "DBHelper.hpp"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>

static int callback(void *data, int argc, char **argv, char **azColName) {
    int i;
    fprintf(stderr, "%s: ", (const char*)data);
    for(i=0; i<argc; i++) {
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");
    return 0;
}

void DBHelper::setDBLocation(char *database) {
    location = database;
}

void DBHelper::openConnection() {
    rc = sqlite3_open(location, &db);
    
    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        exit(0);
    } else
        fprintf(stderr, "Opened database successfully!\n");
}

void DBHelper::setSQLStatment(char *stmt) {
    sql = stmt;
}

void DBHelper::execSQL() {
    openConnection();
    
    rc = sqlite3_exec(db, sql, callback, (void *)data, &zErrMsg);
    
    if(rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
    } else {
        fprintf(stdout, "Operation '%s' completed successfully\n",sql);
    }
    
    sqlite3_close(db);
}

void DBHelper::closeSQL() {
    sqlite3_close(db);
}