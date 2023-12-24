/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 02:45:06 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/23 03:14:15 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{}
Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "create: " << this->_name << std::endl;
}
Zombie::~Zombie(void)
{
	std::cout << "delete: " << this->_name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}
