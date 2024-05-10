/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/04/12 17:48:33 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cstdlib>
#include <cmath>
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

  static Fixed& min( Fixed& a, Fixed& b );
  const static Fixed& min( const Fixed& a, const Fixed& b );
  static Fixed& max( Fixed& a, Fixed& b );
  const static Fixed& max( const Fixed& a, const Fixed& b );

  int   getRawBits( void ) const;
  void  setRawBits( int const raw );
  float toFloat( void ) const;
  int   toInt( void ) const;

  Fixed&  operator=( const Fixed& obj );
  bool    operator<( const Fixed& obj ) const;
  bool    operator>( const Fixed& obj ) const;
  bool    operator<=( const Fixed& obj ) const;
  bool    operator>=( const Fixed& obj ) const;
  bool    operator==( const Fixed& obj ) const;
  bool    operator!=( const Fixed& obj ) const;
  Fixed   operator+( const Fixed& obj ) const;
  Fixed   operator-( const Fixed& obj ) const;
  Fixed   operator*( const Fixed& obj ) const;
  Fixed   operator/( const Fixed& obj ) const;
  Fixed&  operator++( void );
  Fixed   operator++( int );
  Fixed&  operator--( void );
  Fixed   operator--( int );
};

std::ostream& operator<<( std::ostream& out, const Fixed& fixed );

#endif
