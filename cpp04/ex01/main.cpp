/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:59:04 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/27 15:56:56 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
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
	return (0);
}