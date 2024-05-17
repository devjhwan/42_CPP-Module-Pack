/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:17:44 by junghwle          #+#    #+#             */
/*   Updated: 2024/05/17 20:23:29 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

int	main(void) {
	try {
        Bureaucrat highGrade("Alice", 0);
        std::cout << highGrade << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat lowGrade("Bob", 151);
        std::cout << lowGrade << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat normalGrade("Charlie", 75);
        std::cout << normalGrade << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

	try {
        Bureaucrat increaseGrade("Peter", 3);
        std::cout << increaseGrade << std::endl;
		for (int i = 0; i < 5; i++) {
			increaseGrade.increaseGrade();
        	std::cout << increaseGrade << std::endl;
		}
	} catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

	try {
        Bureaucrat decreaseGrade("Temmy", 149);
        	std::cout << decreaseGrade << std::endl;
		for (int i = 0; i < 5; i++) {
			decreaseGrade.decreaseGrade();
        	std::cout << decreaseGrade << std::endl;
		}
	} catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}