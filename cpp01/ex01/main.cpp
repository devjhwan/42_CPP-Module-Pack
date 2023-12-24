/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 03:14:56 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/23 03:18:24 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define	N 10

int	main(void)
{
	Zombie	*zHorde;

	zHorde = zombieHorde(N, "Thrall");
	for (int i = 0; i < N; i++)
		zHorde[i].announce();
	delete[] (zHorde);
	return (0);
}
