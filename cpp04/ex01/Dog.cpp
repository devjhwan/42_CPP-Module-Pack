/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:51:26 by junghwle          #+#    #+#             */
/*   Updated: 2024/04/18 16:07:38 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>
#include <stdio.h>

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
	if (this != &obj)
	{
		this->_type = obj._type;
		this->_brain = new Brain(*(obj._brain));
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Bark!" << std::endl;
}
