/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:37:55 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/27 19:59:30 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

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