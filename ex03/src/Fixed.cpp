/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:53:26 by bkas              #+#    #+#             */
/*   Updated: 2024/06/12 20:03:10 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

/* ************************** [v] CONSTRUCTORS [v] ************************** */

Fixed::Fixed() { fpn = 0; }

Fixed::Fixed(int const num) { fpn = num << bits; };

Fixed::Fixed(const float num) { fpn = roundf(num * (1 << bits)); }

Fixed::Fixed(const Fixed &oth) { Fixed::operator=(oth); }

Fixed::~Fixed() {}

/* ************************** [^] CONSTRUCTORS [^] ************************** */

/* *************************** [v] GET && SET [v] *************************** */

int Fixed::getRawBits() const { return fpn; }

void Fixed::setRawBits(int const raw) { fpn = raw; }

int Fixed::toInt() const { return fpn >> bits; }

float Fixed::toFloat() const { return (float)fpn / (float)(1 << bits); }

/* *************************** [^] GET && SET [^] *************************** */

/* ********************* [v] OPERATOR OVERLOADINGS [v] ********************* */

Fixed &Fixed::operator=(const Fixed &oth) {
    fpn = oth.getRawBits();
    return *this;
}

ostream &operator<<(ostream &o, const Fixed &oth) {
    o << oth.toFloat();
    return o;
}

/* ********************* [^] OPERATOR OVERLOADINGS [^] ********************* */

/* ************************** [v] COMPARISION [v] ************************** */

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

/* ************************** [^] COMPARISION [^] ************************** */

/* ********************* [v] POST && PRE INCREMENTS [v] ********************* */

Fixed &Fixed::operator++() {
    ++fpn;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp = *this;
    fpn++;
    return tmp;
}

/* ********************* [^] POST && PRE INCREMENTS [^] ********************* */

/* ********************* [v] POST && PRE DECREMENTS [v] ********************* */

Fixed &Fixed::operator--() {
    --fpn;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp = *this;
    --fpn;
    return tmp;
}

/* ********************* [^] POST && PRE DECREMENTS [^] ********************* */

/* ********************** [v] ARITHMETIC OPERATORS [v] ********************** */

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

/* ********************** [^] ARITHMETIC OPERATORS [^] ********************** */

/* ********************** [v] MAX && MIN OPERATORS [v] ********************** */

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

/* ********************** [^] MAX && MIN OPERATORS [^] ********************** */