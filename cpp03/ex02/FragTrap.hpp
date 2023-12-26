/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 23:21:06 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/26 23:38:09 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <string>

class FragTrap : public ClapTrap
{
	private:
	public:
		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap();
		FragTrap	&operator=(const FragTrap &obj);
		void	highFivesGuys(void);
};

#endif
