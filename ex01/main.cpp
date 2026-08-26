#include "ClapTrap.hpp"

int main(void) {
    ClapTrap biraj("Biraj");
    ClapTrap copy(biraj);
    ClapTrap assigned;

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

    return 0;
}
