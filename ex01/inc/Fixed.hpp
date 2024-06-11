/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:50:02 by bkas              #+#    #+#             */
/*   Updated: 2024/06/11 17:35:46 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

class Fixed {
   private:
    int fpn;
    static const int bits = 8;

   public:
    Fixed();
    Fixed(const int num);
    Fixed(const float num);
    Fixed(Fixed &oth);
    ~Fixed();
    Fixed &operator=(Fixed &oth);
    int getRawBits() const;
    void setRawBits(int const raw);
    int toInt() const;
    float toFloat() const;
};

#endif