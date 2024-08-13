#include <iostream>
#include "include/dog.h"
#include "include/oper.h"

using std::cout, std::endl;

int main()
{
    setlocale(LC_ALL, "Ru");
    Dog dog1("James", 4);
    dog1.bark();
    return 0;
}