/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 03:27:19 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/23 04:09:51 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

int	main(void)
{
	{
		Weapon	club = Weapon("crude spiked club");

		HumanA	bob("Bob", club);
		bob.attack();
		club.setType("big heaby club");
		bob.attack();
	}
	{
		Weapon	club = Weapon("crude spiked club");

		HumanB jim("Jim");
		jim.setWeapon(&club);
		jim.attack();
		club.setType("big heaby club");
		jim.attack();
	}
	return (0);
}
