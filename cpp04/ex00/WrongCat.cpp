/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:51:26 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/28 15:50:01 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
	this->_type = "Wrong cat";
}
WrongCat::WrongCat(const WrongCat &obj)
{
	*this = obj;
}
WrongCat::~WrongCat()
{}
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