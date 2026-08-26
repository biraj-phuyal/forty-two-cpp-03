#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>

class ScavTrap {
    private:
        std::string name;
        unsigned int hit_points;
        unsigned int energy_points;
        unsigned int attack_damage;
    public:
        ScavTrap(void);
        ScavTrap(const std::string& name);
        ScavTrap(const ScavTrap& src);
        ScavTrap& operator=(const ScavTrap& src);
        ~ScavTrap(void);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
