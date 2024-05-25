/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/18 18:07:27 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cstdlib>
#include <iostream>

class Fixed
{
private:
  int               value;
  const static int  bit;

public:
  Fixed( void );
  Fixed( const Fixed& init_class );
  ~Fixed( void );

  int   getRawBits( void ) const;
  void  setRawBits( int const raw );

  Fixed& operator=( const Fixed& obj );
};

#endif
