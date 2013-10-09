/* 
 * File:   database.h
 * Author: haris
 *
 * Created on October 9, 2013, 7:37 PM
 */

#ifndef DATABASE_H
#define	DATABASE_H
#include <sqlite3.h> 
#include <iostream>
#include <string.h>
#include <stdlib.h> 
namespace addrInNetwork
{
    class database
    {
    public:
        sqlite3 * db;
        sqlite3_stmt * stmt;
        database(char * name);
        ~database();
    };
}



#endif	/* DATABASE_H */

