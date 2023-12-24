/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 00:21:26 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/24 00:55:54 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private:
	int					value;
	static const int	bits = 8;
public:
	Fixed(void);
	Fixed(const Fixed &obj);
	Fixed	&operator=(const Fixed &obj);
	~Fixed(void);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
