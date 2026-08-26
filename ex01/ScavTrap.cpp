#include "ScavTrap.hpp"


ScavTrap::ScavTrap(void) : name("default"), hit_points(10), energy_points(10), attack_damage(0) {
    std::cout << "ScavTrap " << this->name << " default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : name(name), hit_points(10), energy_points(10), attack_damage(0) {
    std::cout << "ScavTrap " << this->name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : name(src.name), hit_points(src.hit_points), energy_points(src.energy_points), attack_damage(src.attack_damage) {
    std::cout << "ScavTrap " << this->name << " copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src) {
    if (this != &src)
    {
        this->name = src.name;
        this->hit_points = src.hit_points;
        this->energy_points = src.energy_points;
        this->attack_damage = src.attack_damage;
    }
    std::cout << "ScavTrap " << this->name << " copy assignment operator called" << std::endl;
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

void    ScavTrap::takeDamage(unsigned int amount) {
    if (this->hit_points == 0)
    {
        std::cout << "ScavTrap " << this->name << " cannot take more damage because it has no hit points" << std::endl;
        return;
    }
    if (amount >= this->hit_points)
        this->hit_points = 0;
    else
        this->hit_points -= amount;
    std::cout << "ScavTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
}

void    ScavTrap::beRepaired(unsigned int amount) {
    if (this->hit_points == 0)
    {
        std::cout << "ScavTrap " << this->name << " cannot repair itself because it has no hit points" << std::endl;
        return;
    }
    if (this->energy_points == 0)
    {
        std::cout << "ScavTrap " << this->name << " cannot repair itself because it has no energy points" << std::endl;
        return;
    }
    this->energy_points--;
    this->hit_points += amount;
    std::cout << "ScavTrap " << this->name << " repairs itself for " << amount << " hit points!" << std::endl;
}
