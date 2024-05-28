/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/28 22:54:53 by csakamot         ###   ########.fr       */
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

bool  bsp(const Point a, const Point b, const Point c, const Point point);

#endif
