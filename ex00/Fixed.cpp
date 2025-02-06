/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchauvot <gchauvot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:45:40 by gchauvot          #+#    #+#             */
/*   Updated: 2025/02/06 16:49:13 by gchauvot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors
Fixed::Fixed()
{
	std::cout << "\e[0;33mDefault Constructor called of Fixed\e[0m" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Fixed\e[0m" << std::endl;
}


// Destructor
Fixed::~Fixed()
{
	std::cout << "\e[0;31mDestructor called of Fixed\e[0m" << std::endl;
}


// Operators
Fixed & Fixed::operator=(const Fixed &assign)
{
	(void) assign;
	return *this;
}
