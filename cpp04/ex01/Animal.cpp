/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:46:25 by junghwle          #+#    #+#             */
/*   Updated: 2024/05/17 17:00:14 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	this->_type = "None";
	std::cout << "Create Animal" << std::endl;
}
Animal::Animal(const Animal &obj)
{
	*this = obj;
}
Animal::~Animal()
{
	std::cout << "Delete Animal" << std::endl;
}
Animal	&Animal::operator=(const Animal &obj)
{
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

std::string	Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound() const
{
	std::cout << "..." << std::endl;
}
