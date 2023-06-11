#include "global.h"
#include <iostream>

Foo globalFoo;
int main()
{
    std::cout << "numFoos = "
              << Foo::numFoos << "\n";
}
