/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:51:26 by junghwle          #+#    #+#             */
/*   Updated: 2024/05/17 16:57:18 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
	this->_type = "Wrong cat";
	std::cout << "Create Wrong cat" << std::endl;
}
WrongCat::WrongCat(const WrongCat &obj)
{
	*this = obj;
}
WrongCat::~WrongCat()
{
	std::cout << "Destroy WronCat" << std::endl;
}
WrongCat	&WrongCat::operator=(const WrongCat &obj)
{
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Maou?" << std::endl;
}