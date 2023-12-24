/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 03:27:44 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/23 04:05:41 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon)
{
	std::cout << "create: " << this->name << ' ';
	std::cout << "with weapon: " << this->weapon.getType() << std::endl;
}
HumanA::~HumanA(void)
{
	std::cout << "destroy: " << this->name << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their ";
	std::cout << this->weapon.getType() << std::endl;
}
