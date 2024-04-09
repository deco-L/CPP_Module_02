/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/04/08 15:29:04 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bit = 8;

Fixed::Fixed(void) {
  std::cout << "Default constractor called"
            << std::endl;
  this->value = 0;
  return ;
}

Fixed::Fixed(const Fixed& init_class) {
  std::cout << "Copy constructor called"
            << std::endl;
  *this = init_class;
  return ;
}

Fixed::Fixed(const int init_integer) {
  std::cout << "Int constructor called"
            << std::endl;
  this->value = init_integer << this->bit;
  return ;
}

Fixed::Fixed(const float init_num) {
  std::cout << "Float constructor called"
            << std::endl;
  this->value = init_num * (1 << this->bit);
}

Fixed::~Fixed(void) {
  std::cout << "Destructor called"
            << std::endl;
  return ;
}

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called"
            << std::endl;
  return this->value;
}

void  Fixed::setRawBits(int const raw) {
  std::cout << "setRawBits member function called"
            << std::endl;
  this->value = raw;
  return ;
}

float Fixed::toFloat(void) const {
  return ((float)this->value / (float)(1 << this->bit));
}

int Fixed::toInt(void) const {
  return (this->value >> this->bit);
}

Fixed& Fixed::operator=(const Fixed& obj) {
  if (this != &obj) {
    std::cout << "Copy assignment operator called"
              << std::endl;
    this->value = obj.getRawBits();
  }
  else {
    std::cout << "\e[1;31mError: "
              << "Attempted self-assignment in copy assignment operator"
              << "\e[0m"
              << std::endl;
  }
  return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
  out << fixed.toFloat();
  return (out);
}
