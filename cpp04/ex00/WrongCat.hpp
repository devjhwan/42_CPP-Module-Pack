/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:50:22 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/27 13:11:49 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HP
# define WRONGCAT_HP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
private:
public:
	WrongCat();
	WrongCat(const WrongCat &obj);
	~WrongCat();
	WrongCat		&operator=(const WrongCat &obj);
	void	makeSound() const;
};


#endif