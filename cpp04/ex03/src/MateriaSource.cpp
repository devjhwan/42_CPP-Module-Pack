/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:09:52 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/27 19:47:06 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>
#include <string>

MateriaSource::MateriaSource()
{
	this->_sourceCount = 0;
	for (int i = 0; i < 4; i++)
		this->_materiaSource[i] = NULL;
}
MateriaSource::MateriaSource(const MateriaSource &obj)
{
	*this = obj;
}
MateriaSource::~MateriaSource()
{
	this->_sourceCount = 0;
	for (int i = 0; i < 4; i++)
		delete (this->_materiaSource[i]);
}
MateriaSource	&MateriaSource::operator=(const MateriaSource &obj)
{
	this->_sourceCount = obj._sourceCount;
	for (int i = 0; i < 4; i++)
	{
		delete (this->_materiaSource[i]);
		this->_materiaSource[i] = obj._materiaSource[i];
	}
	return (*this);
}

void			MateriaSource::learnMateria(AMateria *m)
{
	if (this->_sourceCount == 4)
		std::cout << "Can't memorize more materials" << std::endl;
	else
		this->_materiaSource[this->_sourceCount++] = m;
}

AMateria		*MateriaSource::createMateria(std::string const &type)
{
	int	pos;
	int	i;

	pos = -1;
	i = 0;
	while (pos == -1 && i < 4 && this->_materiaSource[i] != NULL)
	{
		if (this->_materiaSource[i]->getType() == type)
			pos = i;
		i++;
	}
	if (pos == -1)
		return (NULL);
	else
		return (this->_materiaSource[pos]);
}