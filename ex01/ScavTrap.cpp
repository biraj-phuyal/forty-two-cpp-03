#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "ScavTrap " << "default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "ScavTrap " << this->name <<" custom constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) {
    std::cout << "ScavTrap " << this->name << " copy constructor called" << std::endl;
    *this = src;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src) {
    if (this != &src)
        ClapTrap::operator=(src);
    std::cout << "ScavTrap " <<  this->name << " copy assignment operator called" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->name << " destructor called" << std::endl;
}

void    ScavTrap::attack(const std::string& target) {
    if (this->hit_points == 0)
    {
        std::cout << "ScavTrap " << this->name << " cannot attack because it has no hit points" << std::endl;
        return;
    }
    if (this->energy_points == 0)
    {
        std::cout << "ScavTrap " << this->name << " cannot attack because it has no energy points" << std::endl;
        return;
    }
    this->energy_points--;
    std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}

void    ScavTrap::guardGate(void) {
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
}
