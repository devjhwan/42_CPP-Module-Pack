/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:51:26 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/27 15:57:56 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Create Dog" << std::endl;
	_brain = new Brain();
}
Dog::Dog(const Dog &obj)
{
	*this = obj;
}
Dog::~Dog()
{
	delete (this->_brain);
	std::cout << "Delete Dog" << std::endl;
}
Dog	&Dog::operator=(const Dog &obj)
{
	this->_type = obj._type;
	this->_brain = obj._brain;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Bark!" << std::endl;
}