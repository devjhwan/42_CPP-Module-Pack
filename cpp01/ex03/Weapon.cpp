/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 03:27:32 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/23 04:10:42 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type)
{
	this->type = type;
	std::cout << "create: " << this->type << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "destroy: " << this->type << std::endl;
}

const std::string	Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
	std::cout << "change wepon type to: " << type << std::endl;
}
