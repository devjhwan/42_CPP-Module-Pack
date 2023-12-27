/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:50:22 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/27 13:05:26 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
private:
public:
	Dog();
	Dog(const Dog &obj);
	~Dog();
	Dog		&operator=(const Dog &obj);
	void	makeSound() const;
};


#endif