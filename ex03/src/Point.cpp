/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/29 16:23:40 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) :
x(), y() {}

Point::Point(const float& init_x, const float& init_y) :
x(init_x), y(init_y) {}

Point::Point(const Point& obj) :
x(obj.getX()), y(obj.getY()) {
  *this = obj;
}

Point::~Point(void) {}

const Fixed&  Point::getX(void) const {
  return (this->x);
}

const Fixed&  Point::getY(void) const {
  return (this->y);
}

Point& Point::operator=(const Point& obj) {
  if (this == &obj)
    return *this;
  return *this;
}

std::ostream& operator<<( std::ostream& out, const Point& point) {
  out << "x:" << point.getX() << ", y:" << point.getY() << std::endl;
  return (out);
}
