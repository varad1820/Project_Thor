#include"dog.h"
#include <iostream>
Dog::Dog(std::string name_param) : dog_name(name_param)
{
    std::cout << "Constructor for dog " << dog_name << " called." << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destructor for dog " << dog_name << " called" << std::endl;;
}
std::ostream &operator<<(std::ostream &os, const Dog &rhs) {
    os << "dog_name: " << rhs.dog_name;
    return os;
}
