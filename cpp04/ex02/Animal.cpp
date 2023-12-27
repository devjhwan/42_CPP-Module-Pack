/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:46:25 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/27 16:08:09 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::~Animal()
{}

std::string	Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound() const
{
	std::cout << "..." << std::endl;
}
