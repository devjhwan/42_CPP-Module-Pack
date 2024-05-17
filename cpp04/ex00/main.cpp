/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:59:04 by junghwle          #+#    #+#             */
/*   Updated: 2024/04/18 16:10:41 by junghwle         ###   ########.fr       */
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
	std::cout << "Create different type of animals" << std::endl;
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal * wrongcat = new WrongCat();
	std::cout << "Type: " << meta->getType() << " " << std::endl;
	std::cout << "Type: " << dog->getType() << " " << std::endl;
	std::cout << "Type: " << cat->getType() << " " << std::endl;
	std::cout << "Type: " << wrongcat->getType() << " " << std::endl;
	std::cout << std::endl << "Make sounds" << std::endl;
	std::cout << meta->getType() << " says ";
	meta->makeSound();
	std::cout << cat->getType() << " says ";
	cat->makeSound();
	std::cout << dog->getType() << " says ";
	dog->makeSound();
	std::cout << wrongcat->getType() << " says ";
	wrongcat->makeSound();
	std::cout << std::endl << "Delete animals" << std::endl;
	delete (meta);
	delete (cat);
	delete (dog);
	delete (wrongcat);
	return 0;
}