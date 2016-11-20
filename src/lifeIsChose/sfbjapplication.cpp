#include "sfbjapplication.h"

sfbjapplication::sfbjapplication()
{
    
}

bool sfbjapplication::init()
{
    if(!initView("SFBJView"))
    {
        error("view init failed");
    }
    else
    {
        return false;
    }
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
    if(name = "")
    {
        
    }
}

void sfbjapplication::stop()
{
    ~sfbjapplication();
}

sfbjapplication::~sfbjapplication()
{
    
}
