#include "..\include\duration.hpp"
#include <assert.h>
#include <stdbool.h>

int Duration::getDuration()
{
    return time;    
}

Duration::Duration()
{
    time = 0;
}

Duration::~Duration(){}

void Duration::Attribute(int t)
{
    assert( t >= 0);
    time = t;
}

bool Duration::tick()
{
    time++;
    return checkAndUpdateAlarm();
}

bool Duration::tick(int dt)
{
    time = time + dt;
    return checkAndUpdateAlarm();
}

bool Duration::alarmHasBeenSet()
{
    if(alarm == NULL)
        return false;
    else 
        return true;
}

void Duration::setAlarm(int a)
{
    assert(a > time);
    alarm = a;
}

bool Duration::checkAndUpdateAlarm()
{
    if (time >= alarm) 
    {
        alarm = NULL;
        return true;
    }
    else
        return false;
}