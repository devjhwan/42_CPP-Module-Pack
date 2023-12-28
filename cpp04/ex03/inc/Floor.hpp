/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 16:48:06 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/28 17:11:22 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOR_HPP
# define FLOOR_HPP

# include "AMateria.hpp"

class MateriaList;
class MateriaList
{
	private:
		AMateria	*_m;
		MateriaList	*_next;
	public:
		MateriaList();
		MateriaList(AMateria *m);
		MateriaList(const MateriaList &obj);
		~MateriaList();
		MateriaList	&operator=(const MateriaList &obj);
		MateriaList	*getNext();
		void		setNext(AMateria *m);
};

class Floor
{
private:
	MateriaList	*_materiaList;
public:
	Floor();
	Floor(const Floor &obj);
	~Floor();
	Floor	&operator=(const Floor &obj);
	void	placeMateria(AMateria *m);
	void	clearMateriaList();
};

#endif
