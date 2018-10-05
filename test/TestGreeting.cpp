#include "gtest/gtest.h"
#include "Greeting.h"


TEST(foo, greeting) {
    auto greeting = Greeting("Hello");
    greeting.greetPerson("John");
    int count = greeting.getCount();
    ASSERT_TRUE(count == 1);
}

