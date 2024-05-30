/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:17:44 by junghwle          #+#    #+#             */
/*   Updated: 2024/05/30 19:25:20 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include <iostream>

#define YELLOW "\033[1;33m"
#define RED "\033[1;31m"
#define COLOR_OFF "\033[0m"

int	main(void) {
	Intern	intern;
	AForm	*form = intern.makeForm("robotomy request", "robot");
	std::cout << *form << std::endl;
    return 0;
}