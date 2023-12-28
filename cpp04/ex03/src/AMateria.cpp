/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:41:24 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/28 15:46:18 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(): _type("default")
{
	std::cout << "Create " << this->_type << " materia" << std::endl;
}
AMateria::AMateria(std::string const &type): _type(type)
{
	std::cout << "Create " << this->_type << " materia" << std::endl;
}
AMateria::AMateria(const AMateria &obj)
{
	*this = obj;
}
AMateria::~AMateria()
{
	std::cout << "Delete " << this->_type << " materia" << std::endl;
}
AMateria	&AMateria::operator=(const AMateria &obj)
{
	if (this != &obj)
	{
		(std::string)(this->_type) = obj._type;
		std::cout << "Copy " << this->_type << " materia" << std::endl;
	}
	return (*this);
}

std::string const	&AMateria::getType()	const
{
	return (this->_type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* Using default materia to " << target.getName() << " *" << std::endl;
}
