/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 22:19:19 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/26 23:37:52 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap fg("Bob");
	fg.attack("Tom");
	fg.takeDamage(42);
	fg.beRepaired(38);
	fg.takeDamage(100);
	fg.attack("Tom");
	fg.highFivesGuys();
	return (0);
}
