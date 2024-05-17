/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:37:29 by junghwle          #+#    #+#             */
/*   Updated: 2024/04/18 18:12:58 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include <iostream>

int main()
{
	std::cout << "Create new MateriaSource and fill materias" << std::endl; 
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << std::endl << "Create character me and fill skill slots" << std::endl;
	ICharacter* me = new Character("me");
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));
	
	std::cout << std::endl << "Create character bob and use skill to him" << std::endl;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);
	me->use(-1, *bob);

	std::cout << std::endl << "Try to unequip and equip slots" << std::endl;
	me->unequip(0);
	me->equip(src->createMateria("ice"));
	me->unequip(2);
	me->equip(src->createMateria("ice"));
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	
	std::cout << std::endl << "Reequip all slots before deleting it. (Check floor)" << std::endl;
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));

	std::cout << std::endl << "Delete all objects" << std::endl;
	delete (bob);
	delete (me);
	delete (src);
	return (0);
}