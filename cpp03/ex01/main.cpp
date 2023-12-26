/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 22:19:19 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/26 23:18:24 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap sv("Bob");
	sv.attack("Tom");
	sv.takeDamage(42);
	sv.beRepaired(38);
	sv.takeDamage(100);
	sv.attack("Tom");
	sv.guardGate();
	sv.setGateKeeperMode(true);
	sv.guardGate();
	return (0);
}
