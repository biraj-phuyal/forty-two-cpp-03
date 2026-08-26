#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "ScavTrap " << "default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "ScavTrap " << "constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src) {
    std::cout << "ScavTrap " << "copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src) {
    if (this != &src)
        ClapTrap::operator=(src);
    std::cout << "ScavTrap " << "copy assignment operator called" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << "destructor called" << std::endl;
}

void    ScavTrap::attack(const std::string& target) {
    if (this->hit_points == 0)
    {
        std::cout << "ScavTrap " << "cannot attack because it has no hit points" << std::endl;
        return;
    }
    if (this->energy_points == 0)
    {
        std::cout << "ScavTrap " << "cannot attack because it has no energy points" << std::endl;
        return;
    }
    this->energy_points--;
    std::cout << "ScavTrap " << "attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}

void    ScavTrap::guardGate(void) {
    std::cout << "ScavTrap " << "is now in Gate keeper mode" << std::endl;
}
