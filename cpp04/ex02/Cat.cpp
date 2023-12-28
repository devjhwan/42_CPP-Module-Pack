/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:51:26 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/28 15:48:17 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Create Cat" << std::endl;
	this->_brain = new Brain();
}
Cat::Cat(const Cat &obj)
{
	*this = obj;
}
Cat::~Cat()
{
	delete (this->_brain);
	std::cout << "Delete Cat" << std::endl;
}
Cat	&Cat::operator=(const Cat &obj)
{
	if (this != &obj)
	{
		this->_type = obj._type;
		this->_brain = obj._brain;
	}
	return (*this);
}

std::string	Cat::getType() const
{
	return (this->_type);
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}