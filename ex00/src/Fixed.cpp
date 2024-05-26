/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/05/26 13:52:00 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bit = 8;

Fixed::Fixed(void):
value(0) {
  std::cout << "Default constractor called"
            << std::endl;
  return ;
}

Fixed::Fixed(const Fixed& init_class) {
  std::cout << "Copy constructor called"
            << std::endl;
  *this = init_class;
  return ;
}

Fixed::~Fixed(void) {
  std::cout << "Destructor called"
            << std::endl;
  return ;
}

Fixed& Fixed::operator=(const Fixed& obj) {
  if (this != &obj) {
    std::cout << "Copy assignment operator called"
              << std::endl;
    value = obj.getRawBits();
  }
  else {
    std::cout << "\e[1;31mError: "
              << "Attempted self-assignment in copy assignment operator"
              << "\e[0m"
              << std::endl;
  }
  return *this;
}

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called"
            << std::endl;
  return value;
}

void  Fixed::setRawBits(int const raw) {
  std::cout << "setRawBits member function called"
            << std::endl;
  value = raw;
  return ;
}
