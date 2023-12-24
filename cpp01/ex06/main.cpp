/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 19:43:58 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/24 00:16:06 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	Harl	harl;
	
	if (argc != 2)
	{
		std::cout << argv[0] << " <filter>" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
	return (0);
}
