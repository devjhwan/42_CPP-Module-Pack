/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 16:52:44 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/28 19:05:43 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Floor.hpp"
#include <iostream>

MateriaList::MateriaList(): _m(NULL), _next(NULL)
{}
MateriaList::MateriaList(AMateria *m): _m(m), _next(NULL)
{}
MateriaList::MateriaList(const MateriaList &obj)
{
	*this = obj;
}
MateriaList::~MateriaList()
{
	delete (this->_m);
}
MateriaList	&MateriaList::operator=(const MateriaList &obj)
{
	if (this != &obj)
	{
		delete (this->_m);
		this->_m = obj._m;
		this->_next = obj._next;
	}
	return (*this);
}
MateriaList	*MateriaList::getNext()
{
	return (this->_next);
}
void	MateriaList::setNext(AMateria *m)
{
	this->_next = new MateriaList(m);
}

Floor::Floor(): _materiaList(NULL)
{
	std::cout << "Create Floor" << std::endl;
}
Floor::Floor(const Floor &obj)
{
	*this = obj;
}
Floor::~Floor()
{
	clearMateriaList();
	std::cout << "Delete Floor" << std::endl;
}
Floor	&Floor::operator=(const Floor &obj)
{
	if (this != &obj)
	{
		clearMateriaList();
		this->_materiaList = obj._materiaList;
		std::cout << "Copy Floor" << std::endl;
	}
	return (*this);
}
void	Floor::placeMateria(AMateria *m)
{
	MateriaList	*tmpNode;

	if (this->_materiaList == NULL)
		this->_materiaList = new MateriaList(m);
	else
	{
		tmpNode = this->_materiaList;
		while (tmpNode->getNext() != NULL)
			tmpNode = tmpNode->getNext();
		tmpNode->setNext(m);
	}
}
void	Floor::clearMateriaList()
{
	MateriaList	*delNode;

	while ((delNode = this->_materiaList) != NULL)
	{
		this->_materiaList = delNode->getNext();
		delete (delNode);
	}
	std::cout << "clearFloor" << std::endl;
}