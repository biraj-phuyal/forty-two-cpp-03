#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    ClapTrap biraj("Biraj");
    ClapTrap copy(biraj);
    ClapTrap assigned;
    ScavTrap serena("Serena");
    ScavTrap copyScav(serena);
    ScavTrap get;

    assigned = copy;
    biraj.attack("a training dummy");
    biraj.takeDamage(4);
    biraj.beRepaired(2);

    ClapTrap destroyed("Destroyed");
    destroyed.takeDamage(20);
    destroyed.attack("nobody");
    destroyed.beRepaired(10);

    ClapTrap john("John");
    for (int i = 0; i < 11; i++)
        john.attack("a target");

    serena.attack("an intruder");
    serena.takeDamage(30);
    serena.beRepaired(10);
    serena.guardGate(); 

    get = copyScav;
    for (int i = 0; i < 11; i++)
        serena.attack("a villan");
    serena.beRepaired(10);
    serena.takeDamage(30);
    serena.guardGate();

    {
        FragTrap fraggy("Fraggy");

        fraggy.attack("a training dummy");
        fraggy.takeDamage(40);
        fraggy.beRepaired(20);
        fraggy.highFivesGuys();

        FragTrap copy(fraggy);
        FragTrap assigned;
        assigned = fraggy;
    }

    return 0;
}
