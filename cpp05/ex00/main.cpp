/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:17:44 by junghwle          #+#    #+#             */
/*   Updated: 2024/05/18 00:44:35 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

#define YELLOW "\033[1;33m"
#define RED "\033[1;31m"
#define COLOR_OFF "\033[0m"

int	main(void) {
	std::cout << YELLOW << "Try 1" << COLOR_OFF << std::endl;
	try {
        Bureaucrat highGrade("Alice", 0);
        std::cout << highGrade << std::endl;
    } catch (const std::exception& e) {
		std::cerr << RED << "Exception: " << e.what() << COLOR_OFF << std::endl;
    }
	std::cout << std::endl;
	std::cout << YELLOW << "Try 2" << COLOR_OFF << std::endl;
    try {
        Bureaucrat lowGrade("Bob", 151);
        std::cout << lowGrade << std::endl;
    } catch (const std::exception& e) {
		std::cerr << RED << "Exception: " << e.what() << COLOR_OFF << std::endl;
    }
	std::cout << std::endl;
	std::cout << YELLOW << "Try 3" << COLOR_OFF << std::endl;
    try {
        Bureaucrat normalGrade("Charlie", 75);
        std::cout << normalGrade << std::endl;
    } catch (const std::exception& e) {
		std::cerr << RED << "Exception: " << e.what() << COLOR_OFF << std::endl;
    }
	std::cout << std::endl;
	std::cout << YELLOW << "Try 4" << COLOR_OFF << std::endl;
	try {
        Bureaucrat increaseGrade("Peter", 3);
        std::cout << increaseGrade << std::endl;
		for (int i = 0; i < 5; i++)
			increaseGrade.increaseGrade();
	} catch (const std::exception& e) {
		std::cerr << RED << "Exception: " << e.what() << COLOR_OFF << std::endl;
    }
	std::cout << std::endl;
	std::cout << YELLOW << "Try 5" << COLOR_OFF << std::endl;
	try {
        Bureaucrat decreaseGrade("Temmy", 149);
        	std::cout << decreaseGrade << std::endl;
		for (int i = 0; i < 5; i++)
			decreaseGrade.decreaseGrade();
	} catch (const std::exception& e) {
		std::cerr << RED << "Exception: " << e.what() << COLOR_OFF << std::endl;
    }
    return 0;
}