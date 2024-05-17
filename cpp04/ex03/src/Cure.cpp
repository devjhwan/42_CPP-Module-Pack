/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:56:38 by junghwle          #+#    #+#             */
/*   Updated: 2024/03/29 14:41:06 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(): AMateria("cure")
{}
Cure::Cure(std::string const &type): AMateria(type)
{}
Cure::Cure(const Cure &obj): AMateria(obj)
{}
Cure::~Cure()
{}
Cure	&Cure::operator=(const Cure &obj)
{
	if (this != &obj)
		(std::string)(AMateria::_type) = obj._type;
	return (*this);
}

Cure	*Cure::clone()	const
{
	Cure *newCure = new Cure(*this);
	return (newCure);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
