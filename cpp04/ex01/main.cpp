/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:59:04 by junghwle          #+#    #+#             */
/*   Updated: 2024/04/18 16:13:06 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	Animal	*animalArr[4];
	int		i;

	std::cout << "Create 2 dogs and 2 cats with same Animal Class <- Animal	*animalArr[4]" << std::endl;
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
	std::cout << std::endl << "Create new dog and copy to check deepCopy" << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}
	return (0);
}
