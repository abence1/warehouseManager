#include <iostream>
#include "../include/driver.h"
int main()
{
    std::string name = "Józsika";
    std::string license = "B";
    Driver driver(1, name, 100000, 2, license, 4);
    driver.work();
}
