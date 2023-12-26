/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 22:19:19 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/27 00:24:05 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap dd("Bob");
	dd.attack("Tom");
	dd.takeDamage(42);
	dd.beRepaired(38);
	dd.takeDamage(100);
	dd.attack("Tom");
	dd.guardGate();
	dd.setGateKeeperMode(true);
	dd.guardGate();
	dd.highFivesGuys();
	dd.whoAmI();
	return (0);
}
