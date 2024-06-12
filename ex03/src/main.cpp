/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:25:04 by bkas              #+#    #+#             */
/*   Updated: 2024/06/12 19:40:33 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

int main() {
    Point a(0.0f, 0.0f);
    Point b(10.0f, 0.0f);
    Point c(5.0f, 10.0f);
    a = b;
    Point point(4.0f, 7.0f);

    if (bsp(a, b, c, point))
        cout << "The point is inside the triangle." << endl;
    else
        cout << "The point is outside the triangle." << endl;
}