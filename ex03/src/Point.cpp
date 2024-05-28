/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/28 22:55:24 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) :
x(), y() {}

Point::Point(const float& init_x, const float& init_y) :
x(init_x), y(init_y) {}

Point::Point(const Point& obj) :
x(), y() {}

Point::~Point(void) {}

const Fixed&  Point::getX(void) const {
  return (this->x);
}

const Fixed&  Point::getY(void) const {
  return (this->y);
}

Point& Point::operator=(const Point& obj) {
  return *this;
}
