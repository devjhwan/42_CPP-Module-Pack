/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:46:09 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/27 19:34:53 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <string>

class Cure: public AMateria 
{
	private:
	public:
		Cure();
		Cure(std::string const &type);
		Cure(const Cure &obj);
		~Cure();
		Cure	&operator=(const Cure &obj);
		Cure	*clone()	const;
		void	use(ICharacter& target);
};
#endif