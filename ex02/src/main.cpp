/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 20:11:17 by bkas              #+#    #+#             */
/*   Updated: 2024/06/12 12:34:52 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

int main() {
    Fixed a(38);
    // Fixed b(7);
    Fixed const b(Fixed(5.05f) * Fixed(2));

    // bool x = a > b;
    // cout << x << endl;
    cout << b << endl;
    cout << a + b << endl;
    // cout << ++b << endl;
    // cout << b++ << endl;
    // cout << b << endl;
    // cout << b << endl;
    // cout << Fixed::max(a, b) << endl;

    // cout << b << endl;
}