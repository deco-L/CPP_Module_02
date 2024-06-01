/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/06/01 18:53:05 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

const int Fixed::bit = 8;

Fixed::Fixed(void) {
  this->value = 0;
  return ;
}

Fixed::Fixed(const Fixed& init_class) {
  *this = init_class;
  return ;
}

Fixed::Fixed(const int init_integer) {
  if (init_integer > __INT_MAX__ / (1 << this->bit)) {
    std::cout << "\e[1;31mError : value too large.\e[0m" << std::endl;
    exit(EXIT_FAILURE) ;
  } else if (init_integer < INT_MIN / (1 << this->bit)) {
    std::cout << "\e[1;31mError : value too small.\e[0m" << std::endl;
    exit(EXIT_FAILURE);
  }
  this->value = init_integer << this->bit;
  return ;
}

Fixed::Fixed(const float init_num) {
  if (init_num > __INT_MAX__ / (1 << this->bit)) {
    std::cout << "\e[1;31mError : value too large.\e[0m" << std::endl;
    exit(EXIT_FAILURE);
  } else if (init_num < INT_MIN / (1 << this->bit)) {
    std::cout << "\e[1;31mError : value too small.\e[0m" << std::endl;
    exit(EXIT_FAILURE);
  }
  this->value = roundf(init_num * (1 << this->bit));
}

Fixed::~Fixed(void) {
  return ;
}

Fixed&  Fixed::min(Fixed& a, Fixed& b) {
  if (a.toFloat() <= b.toFloat())
    return (a);
  else
    return (b);
}

const Fixed&  Fixed::min(const Fixed& a, const Fixed& b) {
  if (a.toFloat() <= b.toFloat())
    return (a);
  else
    return (b);
}

Fixed&  Fixed::max(Fixed& a, Fixed& b) {
  if (a.toFloat() >= b.toFloat())
    return (a);
  else
    return (b);
}

const Fixed&  Fixed::max(const Fixed& a, const Fixed& b) {
  return (a > b) ? a : b;
}

int Fixed::getRawBits(void) const {
  return this->value;
}

void  Fixed::setRawBits(int const raw) {
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
  if (this != &obj)
    this->value = obj.getRawBits();
  else {
    std::cout << "\e[1;31mError: "
              << "Attempted self-assignment in copy assignment operator"
              << "\e[0m"
              << std::endl;
  }
  return *this;
}

bool  Fixed::operator<(const Fixed& obj) const {
  return (this->getRawBits() < obj.getRawBits());
}

bool  Fixed::operator>(const Fixed& obj) const {
  return (this->getRawBits() > obj.getRawBits());
}

bool  Fixed::operator<=(const Fixed& obj) const {
  return (this->getRawBits() <= obj.getRawBits());
}

bool  Fixed::operator>=(const Fixed& obj) const {
  return (this->getRawBits() >= obj.getRawBits());
}

bool  Fixed::operator==(const Fixed& obj) const {
  return (this->getRawBits() == obj.getRawBits());
}

bool  Fixed::operator!=(const Fixed& obj) const {
  return (this->getRawBits() != obj.getRawBits());
}

float Fixed::operator+(const Fixed& obj) const {
  return (this->toFloat() + obj.toFloat());
}

float Fixed::operator-(const Fixed& obj) const {
  return (this->toFloat() - obj.toFloat());
}

float Fixed::operator*(const Fixed& obj) const {
  return (this->toFloat() * obj.toFloat());
}

float Fixed::operator/(const Fixed& obj) const {
  return (this->toFloat() / obj.toFloat());
}

Fixed Fixed::operator++(void) {
  this->value += 1;
  return (*this);
}

Fixed Fixed::operator++(int) {
  Fixed result;

  result = *this;
  this->value += 1;
  return (result);
}

Fixed Fixed::operator--(void) {
  this->value -= 1;
  return (*this);
}

Fixed Fixed::operator--(int) {
  Fixed result;

  result = *this;
  this->value -= 1;
  return (*this);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
  out << fixed.toFloat();
  return (out);
}
