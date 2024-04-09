/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/04/09 11:02:11 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP

#include <cstdlib>
#include <math.h>
#include <iostream>

class Fixed {
private:
  int               value;
  const static int  bit;

public:
  Fixed( void );
  Fixed( const Fixed& init_class );
  Fixed( const int init_integer );
  Fixed( const float init_num );
  ~Fixed( void );

  int   getRawBits( void ) const;
  void  setRawBits( int const raw );
  float toFloat( void ) const;
  int   toInt( void ) const;

  Fixed& operator=( const Fixed& obj );
};

std::ostream& operator<<( std::ostream& out, const Fixed& fixed );

#endif
