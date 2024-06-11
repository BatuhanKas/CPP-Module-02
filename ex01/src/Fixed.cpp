/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:53:26 by bkas              #+#    #+#             */
/*   Updated: 2024/06/11 19:45:28 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

// Base Constructor
Fixed::Fixed() {
    fpn = 0;
    cout << "Default Constructor Called" << endl;
}

// Int Constructor
Fixed::Fixed(int const num) {
    cout << "Int Constructor Called" << endl;
    fpn = num << bits;
}

// Float Constructor
Fixed::Fixed(const float num) {
    cout << "Float Constructor Called" << endl;
    fpn = roundf(num * (1 << bits));
}

// Copy Constructor
Fixed::Fixed(const Fixed &oth) {
    cout << "Copy Constructor Called" << endl;
    Fixed::operator=(oth);
}

// Operator Overloading (=)
Fixed &Fixed::operator=(const Fixed &oth) {
    cout << "Copy Assignment Operator Called" << endl;
    fpn = oth.getRawBits();
    return *this;
}

// Destructor
Fixed::~Fixed() { cout << "Destructor Called" << endl; }

// getter
int Fixed::getRawBits() const { return fpn; }

// setter
void Fixed::setRawBits(int const raw) {
    fpn = raw;
    cout << "setRawBits member function called" << endl;
}

ostream &operator<<(ostream &o, const Fixed &oth) {
    o << oth.toFloat();
    return o;
}

int Fixed::toInt() const { return fpn >> bits; }

float Fixed::toFloat() const { return (float)fpn / (float)(1 << bits); }