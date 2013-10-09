/* 
 * File:   address.h
 * Author: haris
 *
 * Created on October 6, 2013, 1:12 PM
 */

#ifndef ADDRESS_H
#define	ADDRESS_H
#include <stdlib.h> 
#include <string.h>
#include <iostream>
namespace addrInNetwork
{
    class address{
        unsigned int _addr;
    public:
        address():_addr(0){}
        bool set_addr(char  * arg_addr);
        unsigned int addr(){
            return _addr;
        }
    };
}

#endif	/* ADDRESS_H */

