/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:59:04 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/27 16:11:30 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	//Animal	animal; <-- error
	Animal	*animalArr[10];
	int		i;

	i = 0;
	while (i < 5)
		animalArr[i++] = new Dog();
	while (i < 10)
		animalArr[i++] = new Cat();
	for (i = 0; i < 10; i++)
		animalArr[i]->makeSound();
	for (i = 0; i < 10; i++)
		delete (animalArr[i]);

	Animal	*dog = new Dog();
	Animal	&newDog = *dog;
	Animal	*notCat = dog;

	dog->makeSound();
	newDog.makeSound();
	notCat->makeSound();
	notCat = new Cat();
	notCat->makeSound();
	delete (dog);
	delete (notCat);
	return (0);
}