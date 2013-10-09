#include "data.h"

namespace addrInNetwork
{
    bool data::source (char * name)
    {
        _file.open(name);
        if (_file.is_open())
            return true;
        std::cerr<<"Ne moze se otvoriti fajl "<<name;
        return false;
    }
    std::string data::read()
    {
        
        std::string line;
        if (std::getline(_file, line))
            return line;
        else
            return std::string();
    }
   
    data::~data(){
        _file.close();
    }

}
