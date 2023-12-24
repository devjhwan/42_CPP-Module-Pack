/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 03:27:26 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/23 04:03:50 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon(std::string type);
		~Weapon(void);
		const std::string	getType(void);
		void				setType(std::string type);
};

#endif
