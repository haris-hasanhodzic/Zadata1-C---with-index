/* 
 * File:   network.h
 * Author: haris
 *
 * Created on October 6, 2013, 1:29 PM
 */

#ifndef NETWORK_H
#define	NETWORK_H
#include "address.h"
namespace addrInNetwork
{
    
    class network: public address
    {
        unsigned char _mask;
    public:
        bool set(char * network);
        bool has_addres(address ip);
    };
}
#endif	/* NETWORK_H */

