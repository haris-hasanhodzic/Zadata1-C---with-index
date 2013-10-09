#include "network.h"
#include <iostream>
namespace addrInNetwork
{
    bool network::set(char * network)
    {
        char * ip, * mask;
        ip=strtok(network, "/");
        if(ip==NULL)
            return false;
        mask=strtok(NULL, "/");
        if (mask==NULL)
            return false;
        _mask=atoi(mask);
        if (!set_addr(ip))
            return false;
        return true;
    }
    bool network::has_addres(address ip)
    {
        unsigned int m=-1;
        m<<=32-_mask;
        if(addr()==(ip.addr()&m))
            return true;
        return false;
    }
}
