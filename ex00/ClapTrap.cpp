#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
    std::cout << "Default constructor called" << std::endl;
    this->name = "";
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}