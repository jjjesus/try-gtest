#include "Greeting.h"
#include <iostream>

Greeting::Greeting(std::string greeting):
    mGreeting(greeting),
    mCount(0)
{
}

void Greeting::greetPerson(std::string person)
{
    std::cout << mGreeting << ", " << person << std::endl;
    mCount++;
}

int Greeting::getCount()
{
    return mCount;
}

