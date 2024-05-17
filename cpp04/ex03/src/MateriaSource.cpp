/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:09:52 by junghwle          #+#    #+#             */
/*   Updated: 2024/03/28 15:13:51 by junghwle         ###   ########.fr       */
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
	std::cout << "Create MateriaSource" << std::endl;
}
MateriaSource::MateriaSource(const MateriaSource &obj)
{
	*this = obj;
}
MateriaSource::~MateriaSource()
{
	std::cout << "Clear MateriaSource" << std::endl;
	this->_sourceCount = 0;
	for (int i = 0; i < 4; i++)
		delete (this->_materiaSource[i]);
	std::cout << "Delete MateriaSource" << std::endl;
}
MateriaSource	&MateriaSource::operator=(const MateriaSource &obj)
{
	if (this != &obj)
	{
		this->_sourceCount = obj._sourceCount;
		for (int i = 0; i < 4; i++)
		{
			delete (this->_materiaSource[i]);
			this->_materiaSource[i] = obj._materiaSource[i]->clone();
		}
	}
	std::cout << "Copy MateriaSource" << std::endl;
	return (*this);
}

void			MateriaSource::learnMateria(AMateria *m)
{
	if (this->_sourceCount == 4)
	{
		std::cout << "Can't memorize more materials" << std::endl;
		delete (m);
	}
	else
	{
		std::cout << "Learned " << m->getType() << std::endl;
		this->_materiaSource[this->_sourceCount++] = m;
	}
}

AMateria		*MateriaSource::createMateria(std::string const &type)
{
	int	i;

	i = 0;
	while (i < 4 && this->_materiaSource[i] != NULL)
	{
		if (this->_materiaSource[i]->getType() == type)
			return (this->_materiaSource[i]->clone());
		i++;
	}
	return (NULL);
}