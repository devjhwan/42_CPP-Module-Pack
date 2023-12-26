/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 22:57:55 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/26 23:17:15 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_gateKeeperMode = false;
	std::cout << "Upgrade to scavTrap " << this->_name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destroy scavTrap " << this->_name << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints == 0)
		std::cout << "ScavTrap " << this->_name << " doesn't have energy" << std::endl;
	else if (this->_hitPoints <= 0)
		std::cout << "ScavTrap " << this->_name << " doesn't have HP" << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target \
					<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is ";
	if (this->_gateKeeperMode == false)
		std::cout << "not ";
	std::cout << "on gate keeper mode." << std::endl;
}
void	ScavTrap::setGateKeeperMode(bool mode)
{
	this->_gateKeeperMode = mode;
}
