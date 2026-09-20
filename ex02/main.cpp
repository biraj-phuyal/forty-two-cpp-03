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
    for (int i = 0; i < 49; i++)
        serena.attack("a villain");
    serena.beRepaired(10);
    serena.takeDamage(30);
    serena.guardGate();

    {
        FragTrap fraggy("Fraggy");

        fraggy.attack("a training dummy");
        fraggy.takeDamage(40);
        fraggy.beRepaired(20);
        fraggy.highFivesGuys();

        for (int i = 0; i < 99; i++)
            fraggy.attack("a target");

        FragTrap copy(fraggy);
        FragTrap assigned;
        assigned = fraggy;
    }

    FragTrap tank("Tank");
    tank.takeDamage(99);
    tank.attack("a target");
    tank.takeDamage(1);
    tank.attack("a target");

    return 0;
}
