/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:51:26 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/27 13:30:26 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	this->_type = "Cat";
}
Cat::Cat(const Cat &obj)
{
	*this = obj;
}
Cat::~Cat()
{}
Cat	&Cat::operator=(const Cat &obj)
{
	this->_type = obj._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}