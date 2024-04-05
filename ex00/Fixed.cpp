/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/04/05 14:16:36 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
  std::cout << "Default constractor called"
            << std::endl;
  integer = 0;
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
    this->integer = obj.getRawBits();
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
  return integer;
}

void  Fixed::setRawBits(int const raw) {
  std::cout << "setRawBits member function called"
            << std::endl;
  integer = raw;
  return ;
}
