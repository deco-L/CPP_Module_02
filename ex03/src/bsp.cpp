/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/29 17:24:48 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static bool  crossProduct(const Point& start, const Point& radius, const Point& p) {
  return ((radius.getX().toFloat() - start.getX().toFloat()) * (p.getY().toFloat() - start.getY().toFloat()) -
            (radius.getY().toFloat() - start.getY().toFloat()) * (p.getX().toFloat() - start.getX().toFloat()) >= 0);
}

bool  bsp(const Point a, const Point b, const Point c, const Point point)
{
  if (
    (crossProduct(a, b, point) && crossProduct(b, c, point) &&
    crossProduct(c, a, point)) ||
    (!crossProduct(a, b, point) && !crossProduct(b, c, point) &&
    !crossProduct(c, a, point))
  )
    return (true);
  return (false);
}
