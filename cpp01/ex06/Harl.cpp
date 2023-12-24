/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 19:44:11 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/24 00:15:44 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "42 students are always trying to figure out ";
	std::cout << "how to cover up their messy project!";
	std::cout << std::endl << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I can even read this code. What a mess! ";
	std::cout << "This Gordian Knot won't even pay attention to my cat!";
	std::cout << std::endl << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "What is this suspicious code? ";
	std::cout << "Please, do not contaminate my clear mind. ";
	std::cout << "My stack memory is getting filled by disgusting trash!";
	std::cout << std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "Look at this! no error control, leaks on everywhere and... ";
	std::cout << "what is this? Segmentation Fault? That's crazy!";
	std::cout << std::endl << std::endl;
}

void	Harl::complain(std::string level)
{
	int			i;
	std::string clevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (i = 0; i < 4; i++)
		if (clevel[i] == level)
			break ;
	switch (i)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
		{
			this->error();
			break;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
