/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:44:45 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/27 15:47:21 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
	private:
		std::string	_ideas[100];
	public:
		Brain();
		Brain(const Brain &obj);
		~Brain();
		Brain	&operator=(const Brain &obj);
};


#endif