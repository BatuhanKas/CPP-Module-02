/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:50:02 by bkas              #+#    #+#             */
/*   Updated: 2024/06/11 20:36:21 by bkas             ###   ########.fr       */
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

    // Overloading Functions
    // Comparision
    Fixed &operator=(const Fixed &oth);
    bool operator>(const Fixed &oth) const;
    bool operator<(const Fixed &oth) const;
    bool operator>=(const Fixed &oth) const;
    bool operator<=(const Fixed &oth) const;
    bool operator==(const Fixed &oth) const;
    bool operator!=(const Fixed &oth) const;

    // Arithmetic
    void operator+();
    void operator+(int);
};

ostream &operator<<(ostream &o, const Fixed &oth);

#endif