/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:53:26 by bkas              #+#    #+#             */
/*   Updated: 2024/06/12 15:24:51 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

// Constructors
Fixed::Fixed() { fpn = 0; }

Fixed::Fixed(int const num) { fpn = num << bits; };

Fixed::Fixed(const float num) { fpn = roundf(num * (1 << bits)); }

Fixed::Fixed(const Fixed &oth) { Fixed::operator=(oth); }

// Destructor
Fixed::~Fixed() {}

// Get and Set
int Fixed::getRawBits() const { return fpn; }

void Fixed::setRawBits(int const raw) { fpn = raw; }

int Fixed::toInt() const { return fpn >> bits; }

float Fixed::toFloat() const { return (float)fpn / (float)(1 << bits); }

// Operator Overloadings
Fixed &Fixed::operator=(const Fixed &oth) {
    fpn = oth.getRawBits();
    return *this;
}

ostream &operator<<(ostream &o, const Fixed &oth) {
    o << oth.toFloat();
    return o;
}

// Comparision
bool Fixed::operator>(const Fixed &oth) const {
    return fpn > oth.fpn ? true : false;
}

bool Fixed::operator<(const Fixed &oth) const {
    return fpn < oth.fpn ? true : false;
}

bool Fixed::operator>=(const Fixed &oth) const {
    return fpn >= oth.fpn ? true : false;
}

bool Fixed::operator<=(const Fixed &oth) const {
    return fpn <= oth.fpn ? true : false;
}

bool Fixed::operator==(const Fixed &oth) const {
    return fpn == oth.fpn ? true : false;
}

bool Fixed::operator!=(const Fixed &oth) const {
    return fpn != oth.fpn ? true : false;
}

// Post & Pre Increment Operators
Fixed &Fixed::operator++() {
    ++fpn;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp = *this;
    fpn++;
    return tmp;
}

// Post & Pre Decrement Operators
Fixed &Fixed::operator--() {
    --fpn;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp = *this;
    --fpn;
    return tmp;
}

// Arithmethic Operators
Fixed Fixed::operator+(const Fixed &oth) const {
    return this->toFloat() + oth.toFloat();
}

Fixed Fixed::operator-(const Fixed &oth) const {
    return this->toFloat() - oth.toFloat();
}

Fixed Fixed::operator*(const Fixed &oth) const {
    return this->toFloat() * oth.toFloat();
}

Fixed Fixed::operator/(const Fixed &oth) const {
    return this->toFloat() / oth.toFloat();
}

// Max Operators
Fixed &Fixed::max(Fixed &oth1, Fixed &oth2) {
    return oth1.toFloat() > oth2.toFloat() ? oth1 : oth2;
}

const Fixed &Fixed::max(const Fixed &oth1, const Fixed &oth2) {
    return oth1.toFloat() > oth2.toFloat() ? oth1 : oth2;
}

// Min Operators
Fixed &Fixed::min(Fixed &oth1, Fixed &oth2) {
    return oth1.toFloat() < oth2.toFloat() ? oth1 : oth2;
}

const Fixed &Fixed::min(const Fixed &oth1, const Fixed &oth2) {
    return oth1.toFloat() < oth2.toFloat() ? oth1 : oth2;
}