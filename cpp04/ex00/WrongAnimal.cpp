/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:46:25 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/28 15:49:59 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	this->_type = "None";
}
WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	*this = obj;
}
WrongAnimal::~WrongAnimal()
{}
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
