/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:50:22 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/27 15:52:35 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain	*_brain;
public:
	Cat();
	Cat(const Cat &obj);
	~Cat();
	Cat		&operator=(const Cat &obj);
	void	makeSound() const;
};


#endif