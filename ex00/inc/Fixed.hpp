/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:50:02 by bkas              #+#    #+#             */
/*   Updated: 2024/06/11 15:56:45 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Fixed {
   private:
    int fpn;
    static const int bits = 8;

   public:
    Fixed();
    Fixed(Fixed &oth);
    ~Fixed();
    Fixed &operator=(Fixed &oth);
    int getRawBits() const;
    void setRawBits(int const raw);
};

#endif