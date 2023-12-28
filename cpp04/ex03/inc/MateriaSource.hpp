/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:06:44 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/27 19:41:25 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include <string>

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*_materiaSource[4];
		int			_sourceCount;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &obj);
		~MateriaSource();
		MateriaSource	&operator=(const MateriaSource &obj);
		void			learnMateria(AMateria *m);
		AMateria		*createMateria(std::string const &type);
};

#endif
