/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:50:02 by bkas              #+#    #+#             */
/*   Updated: 2024/06/13 14:05:27 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ostream;

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define CYAN "\033[0;36m"
#define RESET "\033[0m"

class Fixed {
   private:
    int fpn;
    static const int bits = 8;

   public:
    Fixed();
    Fixed(const int num);
    Fixed(const float num);
    Fixed(const Fixed &oth);
    ~Fixed();
    int getRawBits() const;
    void setRawBits(int const raw);
    int toInt() const;
    float toFloat() const;

    /* Overloading Functions */

    // Comparision
    Fixed &operator=(const Fixed &oth);
    bool operator>(const Fixed &oth) const;
    bool operator<(const Fixed &oth) const;
    bool operator>=(const Fixed &oth) const;
    bool operator<=(const Fixed &oth) const;
    bool operator==(const Fixed &oth) const;
    bool operator!=(const Fixed &oth) const;

    // Post - Pre Increment & Decrement Operators
    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);

    // Arithmetic Operators
    Fixed operator+(const Fixed &oth) const;
    Fixed operator-(const Fixed &oth) const;
    Fixed operator*(const Fixed &oth) const;
    Fixed operator/(const Fixed &oth) const;

    // Max Operators
    static Fixed &max(Fixed &oth1, Fixed &oth2);
    static const Fixed &max(const Fixed &oth1, const Fixed &oth2);

    // Min Operators
    static Fixed &min(Fixed &oth1, Fixed &oth2);
    static const Fixed &min(const Fixed &oth1, const Fixed &oth2);
};

ostream &operator<<(ostream &o, const Fixed &oth);

#endif