/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:37:55 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/28 14:59:50 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class AMateria;

# include "ICharacter.hpp"
# include <string>

class AMateria
{
	protected:
		std::string const	_type;
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &obj);
		virtual	~AMateria();
		AMateria			&operator=(const AMateria &obj);

		std::string const	&getType()	const;
		virtual AMateria	*clone()	const = 0;
		virtual void		use(ICharacter& target);
};

#endif