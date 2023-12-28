/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:41:24 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/27 19:57:21 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(): _type("default")
{}
AMateria::AMateria(std::string const &type): _type(type)
{}
AMateria::AMateria(const AMateria &obj)
{
	*this = obj;
}
AMateria::~AMateria()
{}
AMateria	&AMateria::operator=(const AMateria &obj)
{
	(std::string)_type = obj._type;
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
