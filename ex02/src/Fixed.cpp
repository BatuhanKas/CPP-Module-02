/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:53:26 by bkas              #+#    #+#             */
/*   Updated: 2024/06/11 20:33:43 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

// Constructors
Fixed::Fixed() {
    fpn = 0;
    cout << "Default Constructor Called" << endl;
}

Fixed::Fixed(int const num) {
    cout << "Int Constructor Called" << endl;
    fpn = num << bits;
}

Fixed::Fixed(const float num) {
    cout << "Float Constructor Called" << endl;
    fpn = roundf(num * (1 << bits));
}

Fixed::Fixed(const Fixed &oth) {
    cout << "Copy Constructor Called" << endl;
    Fixed::operator=(oth);
}

// Destructor
Fixed::~Fixed() { cout << "Destructor Called" << endl; }

// Get and Set
int Fixed::getRawBits() const { return fpn; }

void Fixed::setRawBits(int const raw) {
    fpn = raw;
    cout << "setRawBits member function called" << endl;
}

int Fixed::toInt() const { return fpn >> bits; }

float Fixed::toFloat() const { return (float)fpn / (float)(1 << bits); }

// Operator Overloadings
Fixed &Fixed::operator=(const Fixed &oth) {
    cout << "Copy Assignment Operator Called" << endl;
    fpn = oth.getRawBits();
    return *this;
}

ostream &operator<<(ostream &o, const Fixed &oth) {
    o << oth.toFloat();
    return o;
}

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