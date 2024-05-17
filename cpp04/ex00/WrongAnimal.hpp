/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:43:47 by junghwle          #+#    #+#             */
/*   Updated: 2024/05/17 16:56:15 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &obj);
		virtual ~WrongAnimal();
		WrongAnimal			&operator=(const WrongAnimal &obj);
		std::string		getType() const;
		void	makeSound() const;
};

#endif