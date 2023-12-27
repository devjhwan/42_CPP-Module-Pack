/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:59:04 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/27 13:31:21 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal * wrong = new WrongCat();
	std::cout << "Type: " << j->getType() << " " << std::endl;
	std::cout << "Type: " << i->getType() << " " << std::endl;
	std::cout << "Type: " << wrong->getType() << " " << std::endl;
	std::cout << i->getType() << " says ";
	i->makeSound();
	std::cout << j->getType() << " says ";
	j->makeSound();
	std::cout << meta->getType() << " says ";
	meta->makeSound();
	std::cout << wrong->getType() << " says ";
	wrong->makeSound();
	delete (meta);
	delete (i);
	delete (j);
	delete (wrong);
	return 0;
}