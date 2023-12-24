/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 03:27:39 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/23 04:06:05 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class HumanA
{
	private:
		std::string	name;
		Weapon		&weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void	attack(void);
};

#endif
