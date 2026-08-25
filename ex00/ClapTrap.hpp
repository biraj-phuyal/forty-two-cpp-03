

#include <iostream>

class ClapTrap {
    private:
        std::string name;
        int hit_points[10];
        int energy_points[10];
        int attack_damage[10];
    public:
        ClapTrap(void);
        ~ClapTrap(void);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
