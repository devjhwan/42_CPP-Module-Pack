/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:50:22 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/28 15:45:25 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <string>
#include <iostream>

Character::Character()
{
	this->_name = "default";
	this->_materialCount = 0;
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
	std::cout << "Create " << this->_name << std::endl;
}
Character::Character(std::string const &name)
{
	this->_name = name;
	this->_materialCount = 0;
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
	std::cout << "Create " << this->_name << std::endl;
}
Character::Character(const Character &obj)
{
	*this = obj;
}
Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete(this->_slots[i]);
	std::cout << "Delete " << this->_name << std::endl;
}
Character	&Character::operator=(const Character &obj)
{
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_materialCount = obj._materialCount;
		for (int i = 0; i < 4; i++)
		{
			delete(this->_slots[i]);
			this->_slots[i] = obj._slots[i];
		}
	}
	return (*this);
}

std::string const	&Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	if (this->_materialCount == 4)
	{
		std::cout << "No space left in material slot" << std::endl;
		delete (m);
	}
	else
	{
		this->_slots[this->_materialCount] = m;
		std::cout << "Equip material to slot " << this->_materialCount << std::endl;
		this->_materialCount++;
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << "Index out of range" <<std::endl;
	else if (this->_materialCount == 0)
		std::cout << "Empty material slot" << std::endl;
	else if (idx >= 0 && idx <= 3 && idx >= this->_materialCount)
		std::cout << "Selected Index is an empty slot" << std::endl;
	else
	{
		this->_slots[idx] = NULL;
		std::cout << "Unequip material from slot " << idx << std::endl;
		this->_materialCount--;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		std::cout << "Slot out of range" << std::endl;
	else if (idx >= this->_materialCount)
		std::cout << "Slot " << idx << " is empty." << std::endl;
	else
		this->_slots[idx]->use(target);
}

int	Character::getMaterialCount()
{
	return (this->_materialCount);
}
