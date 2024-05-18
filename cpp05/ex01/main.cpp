/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:17:44 by junghwle          #+#    #+#             */
/*   Updated: 2024/05/18 01:29:59 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

#define YELLOW "\033[1;33m"
#define RED "\033[1;31m"
#define COLOR_OFF "\033[0m"

int	main(void) {
	std::cout << YELLOW << "Try 1" << COLOR_OFF << std::endl;
	try {
		Form form("doc1", false, 0, 0);
		std::cout << form << std::endl;
	} catch (const std::exception& e) {
		std::cerr << RED << "Exception: " << e.what() << COLOR_OFF << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "Try 2" << COLOR_OFF << std::endl;
	try {
		Form form("doc2", false, 200, 200);
		std::cout << form << std::endl;
	} catch (const std::exception& e) {
		std::cerr << RED << "Exception: " << e.what() << COLOR_OFF << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "Try 3" << COLOR_OFF << std::endl;
	try {
		Form form("doc3", false, 75, 75);
		std::cout << form << std::endl;
	} catch (const std::exception& e) {
		std::cerr << RED << "Exception: " << e.what() << COLOR_OFF << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "Try 4" << COLOR_OFF << std::endl;
	try {
		Form form("doc4", false, 20, 10);
		Bureaucrat ferran("Ferran", 30);
		
		std::cout << form << std::endl;
		std::cout << ferran << std::endl << std::endl;
		ferran.signForm(form);
		std::cout << std::endl;
		std::cout << form << std::endl;
	} catch (const std::exception& e) {
		std::cerr << RED << "Exception: " << e.what() << COLOR_OFF << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "Try 5" << COLOR_OFF << std::endl;
	try {
		Form form("doc5", false, 50, 10);
		Bureaucrat camila("Camila", 30);
		
		std::cout << form << std::endl;
		std::cout << camila << std::endl << std::endl;
		camila.signForm(form);
		std::cout << std::endl;
		std::cout << form << std::endl;
	} catch (const std::exception& e) {
		std::cerr << RED << "Exception: " << e.what() << COLOR_OFF << std::endl;
	}
    return 0;
}