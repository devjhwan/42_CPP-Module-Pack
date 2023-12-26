/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 22:19:36 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/26 23:33:37 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
	this->_name = "default";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "Create clapTrap " << this->_name << std::endl;
}
ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "Create clapTrap " << this->_name << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "Destroy clapTrap " << this->_name << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &obj)
{
	this->_name = obj._name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	std::cout << "Copy clapTrap " << this->_name << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name << " doesn't have energy" << std::endl;
	else if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " doesn't have HP" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target \
					<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	int	prevHitPoints;

	std::cout << "ClapTrap " << this->_name << " has been attaked with damage of " \
				<< amount << std::endl;
	prevHitPoints = this->_hitPoints;
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "Hit Point: " << prevHitPoints << " -> " << this->_hitPoints << std::endl;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	int	prevHitPoints;
	
	if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name << " doesn't have energy" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " has been repaired by " \
					<< amount << " point" << std::endl;
		prevHitPoints = this->_hitPoints;
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << "Hit Point: " << prevHitPoints << " -> " << this->_hitPoints << std::endl;
	}
}
