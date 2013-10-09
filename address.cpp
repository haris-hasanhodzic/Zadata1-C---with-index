#include "address.h"

namespace addrInNetwork
{
    bool address::set_addr(char  * arg_addr){
        char * part;
        char i=0;
        part = strtok (arg_addr, ".");
        if(part==NULL)
            return false;
        _addr=atoi(part);
        while ((part=strtok (NULL, "."))!= NULL)
        {
            i++;
            _addr<<=8;
            _addr|=atoi(part);
        }
        if(i!=3)
            return false;
        return true;
    }
}
