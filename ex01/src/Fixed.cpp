/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:53:26 by bkas              #+#    #+#             */
/*   Updated: 2024/06/11 15:33:17 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed() {
    fpn = 0;
    cout << "Default Constructor Called" << endl;
}

Fixed::Fixed(Fixed &oth) {
    fpn = oth.fpn;
    cout << "Copy Constructor Called" << endl;
}

Fixed &Fixed::operator=(Fixed &oth) {
    fpn = oth.fpn;
    cout << "Copy Assignment Operator Called" << endl;
    return *this;
}

Fixed::~Fixed() { cout << "Destructor Called" << endl; }

int Fixed::getRawBits() const {
    cout << "getRawBits member function called" << endl;
    return fpn;
}

void Fixed::setRawBits(int const raw) {
    fpn = raw;
    cout << "setRawBits member function called" << endl;
}