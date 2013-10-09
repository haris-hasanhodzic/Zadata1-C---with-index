/* 
 * File:   data.h
 * Author: haris
 *
 * Created on October 6, 2013, 1:31 PM
 */

#ifndef DATA_H
#define	DATA_H
#include <iostream>
#include <fstream>
#include <string.h>

namespace addrInNetwork
{
    class data
    {
        std::ifstream _file;
    public:
        bool source (char * name);
        std::string read();
        ~data();
    };
}


#endif	/* DATA_H */

