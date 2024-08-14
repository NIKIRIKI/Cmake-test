#include <iostream>
#include "include/dog.h"
#include "oper/include/oper.h"

using std::cout, std::endl;

int main()
{
    setlocale(LC_ALL, "Ru");
    cout << add(2, 4) << endl; // Теперь функция add доступна
    Dog dog1("James", 4);
    dog1.bark();
    return 0;
}