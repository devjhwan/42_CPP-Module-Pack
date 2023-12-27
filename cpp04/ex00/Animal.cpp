/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:46:25 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/27 13:02:20 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	this->_type = "None";
}
Animal::Animal(const Animal &obj)
{
	*this = obj;
}
Animal::~Animal()
{}
Animal	&Animal::operator=(const Animal &obj)
{
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
