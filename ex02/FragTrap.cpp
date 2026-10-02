#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
    std::cout << "FragTrap " << name << " default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
    std::cout << "FragTrap " << name << " custom constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) {
    std::cout << "FragTrap " << name << " copy constructor called" << std::endl;
    *this = src;
}

FragTrap& FragTrap::operator=(const FragTrap& src) {
    if (this != &src)
        ClapTrap::operator=(src);
    std::cout << "FragTrap " << name << " copy assignment operator called" << std::endl;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " destructor called" << std::endl;
}

void    FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << name << " requests a high five!" << std::endl;
}
