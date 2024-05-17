/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:46:25 by junghwle          #+#    #+#             */
/*   Updated: 2024/05/17 16:57:49 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	this->_type = "None";
	std::cout << "Create Wrong Animal" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	*this = obj;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "Destroy Wrong Animal" << std::endl;
}
WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &obj)
{
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "..." << std::endl;
}
