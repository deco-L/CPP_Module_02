/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/04/05 13:53:52 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP

#include <cstdlib>
#include <iostream>

class Fixed {
private:
  int               integer;
  const static int  bit = 8;

public:
  Fixed( void );
  Fixed( const Fixed& init_class );
  ~Fixed( void );

  int   getRawBits( void ) const;
  void  setRawBits( int const raw );

  Fixed& operator=( const Fixed& obj );
};

#endif
