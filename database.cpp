#include "database.h"
namespace addrInNetwork
{
    database::database(char * name)
    {
        if(sqlite3_open(name, &db) != SQLITE_OK)
        {
            std::cerr<<sqlite3_errmsg(db);
            exit(-1);
        } 
        sqlite3_enable_load_extension(db,1);
        if (sqlite3_prepare( db, "SELECT load_extension('./libsqliteipv4.so');", -1, &stmt, NULL )!=SQLITE_OK)
        {
            std::cerr<<sqlite3_errmsg(db);
            exit(-1);
        }
        sqlite3_step( stmt );
        sqlite3_finalize(stmt);
    }
    database::~database()
    {
         sqlite3_close(db);    
    }
    
}
