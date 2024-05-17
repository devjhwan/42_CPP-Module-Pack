/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:51:26 by junghwle          #+#    #+#             */
/*   Updated: 2024/05/17 16:56:54 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Create Cat" << std::endl;
}
Cat::Cat(const Cat &obj)
{
	*this = obj;
}
Cat::~Cat()
{
	std::cout << "Destroy Cat" << std::endl;
}
Cat	&Cat::operator=(const Cat &obj)
{
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}