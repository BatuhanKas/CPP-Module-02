/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:25:55 by bkas              #+#    #+#             */
/*   Updated: 2024/06/12 19:40:52 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

static float crossProduct(Point const &a, Point const &b, Point const &c) {
    return (b.getX() - a.getX()).toFloat() * (c.getY() - a.getY()).toFloat() -
           (b.getY() - a.getY()).toFloat() * (c.getX() - a.getX()).toFloat();
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    bool b1, b2, b3;

    b1 = crossProduct(point, a, b) < 0.0f;
    b2 = crossProduct(point, b, c) < 0.0f;
    b3 = crossProduct(point, c, a) < 0.0f;

    if (b1 * b2 * b3 == 0) return false;

    return ((b1 == b2) && (b2 == b3));
}