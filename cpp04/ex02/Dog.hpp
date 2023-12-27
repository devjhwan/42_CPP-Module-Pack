/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:50:22 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/27 16:07:11 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain	*_brain;
public:
	Dog();
	Dog(const Dog &obj);
	~Dog();
	Dog			&operator=(const Dog &obj);
	std::string	getType() const;
	void		makeSound() const;
};


#endif