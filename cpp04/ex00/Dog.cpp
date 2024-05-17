/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:51:26 by junghwle          #+#    #+#             */
/*   Updated: 2024/05/17 16:57:01 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Create Dog" << std::endl;
}
Dog::Dog(const Dog &obj)
{
	*this = obj;
}
Dog::~Dog()
{
	std::cout << "Destroy Dog" << std::endl;
}
Dog	&Dog::operator=(const Dog &obj)
{
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Bark!" << std::endl;
}