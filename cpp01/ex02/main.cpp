/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 03:19:52 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/23 03:25:58 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*strPtr = &str;
	std::string	&strRef = str;

	std::cout << "Memory Address of string: " << &str << std::endl;
	std::cout << "Memory Address of string pointer: " << strPtr << std::endl;
	std::cout << "Memory Address of string reference: " << &strRef << std::endl;
	std::cout << std::endl;
	std::cout << "Value of string: " << str << std::endl;
	std::cout << "Value of string pointer: " << *strPtr << std::endl;
	std::cout << "Value of string reference: " << strRef << std::endl;
	return (0);
}
