/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:17:44 by junghwle          #+#    #+#             */
/*   Updated: 2024/05/17 19:38:29 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

int	main(void) {
	try {
        Bureaucrat highGrade("Alice", 0);
        std::cout << highGrade.getName() << " has a grade of " << highGrade.getGrade() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat lowGrade("Bob", 151);
        std::cout << lowGrade.getName() << " has a grade of " << lowGrade.getGrade() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat normalGrade("Charlie", 75);
        std::cout << normalGrade.getName() << " has a grade of " << normalGrade.getGrade() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

	try {
        Bureaucrat increaseGrade("Peter", 3);
        std::cout << increaseGrade.getName() << " has a grade of " << increaseGrade.getGrade() << std::endl;
		for (int i = 0; i < 5; i++) {
			increaseGrade.increaseGrade();
      		std::cout << increaseGrade.getName() << " has a grade of " << increaseGrade.getGrade() << std::endl;
		}
	} catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

	try {
        Bureaucrat decreaseGrade("Temmy", 149);
        std::cout << decreaseGrade.getName() << " has a grade of " << decreaseGrade.getGrade() << std::endl;
		for (int i = 0; i < 5; i++) {
			decreaseGrade.decreaseGrade();
      		std::cout << decreaseGrade.getName() << " has a grade of " << decreaseGrade.getGrade() << std::endl;
		}
	} catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}