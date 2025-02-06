/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchauvot <gchauvot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:45:44 by gchauvot          #+#    #+#             */
/*   Updated: 2025/02/06 16:49:04 by gchauvot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <cstdlib>
#include <string>
#include <iostream>
#include <vector>
#include <functional>
#include <stdio.h>
#include <fstream>
#include <filesystem>

class Fixed
{
	public:
		// Constructors
		Fixed();
		Fixed(const Fixed &copy);

		// Destructor
		~Fixed();

		// Operators
		Fixed & operator=(const Fixed &assign);

	private:

};



#endif