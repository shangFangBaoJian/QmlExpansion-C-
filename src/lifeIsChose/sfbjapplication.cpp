#include "sfbjapplication.h"

sfbjapplication::sfbjapplication()
{
    
}

bool sfbjapplication::init()
{
//    if(!initView(""))
//    {
//        std::cout << ("view init failed");
//    }
//    else
//    {
//        return false;
//    }
    return true;
}

bool sfbjapplication::start()
{
    if(!init())
    {
        return false;
    }
    return true;
}

int sfbjapplication::initView(QString &name)
{
//    if(name = "")
//    {
        
//    }
    Q_UNUSED(name);
    return 0;
}

void sfbjapplication::stop()
{
    
}

int sfbjapplication::initIni()
{
    
}
