/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 03:27:56 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/23 04:10:04 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name): weapon(NULL)
{
	this->name = name;
	std::cout << "create: " << this->name << ' ';
	std::cout << "with weapon: (empty)" << std::endl;
}
HumanB::~HumanB(void)
{
	std::cout << "destroy: " << this->name << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << this->name << ' ';
	if (this->weapon == NULL)
		std::cout << "is not armed";
	else
		std::cout << "attacks with their " << this->weapon->getType();
	std::cout << std::endl;
}

void	HumanB::setWeapon(Weapon *weapon)
{
	this->weapon = weapon;
	std::cout << this->name << ": ";
	std::cout << "set weapon: " << this->weapon->getType() << std::endl;
}
