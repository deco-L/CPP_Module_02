/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/29 16:12:18 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
  const Fixed x;
  const Fixed y;

public:
  Point( void );
  Point( const float& init_x, const float& init_y);
  Point( const Point& obj );
  ~Point( void );

  const Fixed&  getX( void ) const;
  const Fixed&  getY( void ) const ;

  Point& operator=( const Point& obj );
};

std::ostream& operator<<( std::ostream& out, const Point& point);

#endif
