/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:59:04 by junghwle          #+#    #+#             */
/*   Updated: 2024/04/18 18:10:33 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	//Animal	animal; <-- error
	Animal	*animalArr[4];
	int		i;

	std::cout << "Create two Dogs and tow Cats. Animal can't be instantiated for it self." << std::endl;
	i = 0;
	while (i < 2)
		animalArr[i++] = new Dog();
	while (i < 4)
		animalArr[i++] = new Cat();
		
	std::cout << std::endl << "Make Sounds" << std::endl;
	for (i = 0; i < 4; i++)
		animalArr[i]->makeSound();
		
	std::cout << std::endl << "Delete animals" << std::endl;
	for (i = 0; i < 4; i++)
		delete (animalArr[i]);

	std::cout << std::endl << "Create new Dog" << std::endl;
	Animal	*dog = new Dog();
	std::cout << std::endl << "Copy by reference (it doens't create new animal)" << std::endl;
	Animal	&newDog = *dog;

	std::cout << std::endl << "Make Sounds" << std::endl;
	dog->makeSound();
	newDog.makeSound();

	std::cout << std::endl << "Change dog to cat" << std::endl;
	delete (dog);
	dog = new Cat();
	std::cout << std::endl << "Make Sounds" << std::endl;
	dog->makeSound();
	newDog.makeSound();
	std::cout << std::endl << "Delete animals (it only delete one dog)" << std::endl;
	delete (dog);
	std::cout << "Check leaks" << std::endl;
	return (0);
}
