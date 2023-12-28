/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:46:09 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/27 19:34:59 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <string>

class Ice: public AMateria 
{
	private:
	public:
		Ice();
		Ice(std::string const &type);
		Ice(const Ice &obj);
		~Ice();
		Ice	&operator=(const Ice &obj);
		Ice	*clone()	const;
		void	use(ICharacter& target);
};
#endif