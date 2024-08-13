#ifndef DOG_H
#define DOG_H

#include <string>
#include <iostream>

class Dog
{
private:
    std::string name; // Имя собаки
    int age;          // Возраст собаки

public:
    // Конструктор
    Dog(const std::string &dogName, int dogAge) : name(dogName), age(dogAge) {}

    // Конструктор копирования
    Dog(const Dog &other) : name(other.name), age(other.age)
    {
        std::cout << "Конструктор копирования вызван для " << name << std::endl;
    }

    // Деструктор
    ~Dog()
    {
        std::cout << "Деструктор вызван для " << name << std::endl;
    }

    // Метод для получения имени собаки
    std::string getName() const
    {
        return name;
    }

    // Метод для установки имени собаки
    void setName(const std::string &dogName)
    {
        name = dogName;
    }

    // Метод для получения возраста собаки
    int getAge() const
    {
        return age;
    }

    // Метод для установки возраста собаки
    void setAge(int dogAge)
    {
        age = dogAge;
    }

    // Метод для вывода информации о собаке
    void bark() const
    {
        std::cout << "Собака " << name << " говорит: Гав! Мне " << age << " лет." << std::endl;
    }
};

#endif // DOG_H