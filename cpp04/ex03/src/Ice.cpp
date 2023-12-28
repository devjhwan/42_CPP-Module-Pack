/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:52:55 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/28 15:46:11 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice(): AMateria("ice")
{}
Ice::Ice(std::string const &type): AMateria(type)
{}
Ice::Ice(const Ice &obj): AMateria(obj)
{}
Ice::~Ice()
{}
Ice	&Ice::operator=(const Ice &obj)
{
	if (this != &obj)
		(std::string)(AMateria::_type) = obj._type;
	return (*this);
}

Ice	*Ice::clone()	const
{
	Ice *newIce = new Ice(*this);
	return (newIce);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
