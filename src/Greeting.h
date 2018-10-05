#pragma once

#include <string>

class Greeting {
public:
    Greeting(std::string greeting);
    void greetPerson(std::string person);
    int getCount();

private:
    std::string mGreeting;
    int mCount;
};

