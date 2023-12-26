/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 22:57:47 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/26 23:16:50 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <string>

class ScavTrap : public ClapTrap
{
	private:
		bool	_gateKeeperMode;
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		void	attack(const std::string& target);
		void	guardGate();
		void	setGateKeeperMode(bool mode);
};

#endif
