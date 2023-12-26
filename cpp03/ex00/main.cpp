/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 22:19:19 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/26 22:48:22 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap cpA("PlayerA");
	ClapTrap cpB("PlayerB");

	cpA.attack("enemy");
	cpA.takeDamage(10);
	cpA.takeDamage(5);
	cpA.attack("enemy");
	cpA.beRepaired(13);
	cpB.attack("enemy2");
	for (int i = 0; i < 10; i++)
		cpB.attack("dummy");
	cpB.beRepaired(3);
	return (0);
}
