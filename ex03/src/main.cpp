/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/29 16:38:25 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool  bsp(const Point a, const Point b, const Point c, const Point point);

int main(void) {
  const Point a(0, 3);
  const Point b(-3, -3);
  const Point c(3, -3);

  for (float y = 5; y > -6; y-=0.2) {
    for (float x = -5; x < 6; x+=0.2) {
      Point px(x, y);
      if (bsp(a, b, c, px))
        std::cout << "\e[38;5;1m.\e[0m";
      else
        std::cout << "\e[38;5;256m.\e[0m";
    }
    std::cout << std::endl;
  }
  return (EXIT_SUCCESS);
}
