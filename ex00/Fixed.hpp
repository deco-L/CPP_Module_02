/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/04/05 17:01:32 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP

#include <cstdlib>
#include <iostream>

class Fixed {
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
