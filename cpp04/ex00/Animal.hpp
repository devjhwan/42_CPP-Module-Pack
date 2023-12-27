/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:43:47 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/27 13:10:20 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(const Animal &obj);
		virtual ~Animal();
		Animal			&operator=(const Animal &obj);
		std::string		getType() const;
		virtual void	makeSound() const;
};

#endif