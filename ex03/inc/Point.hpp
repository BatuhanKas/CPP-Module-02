/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:25:33 by bkas              #+#    #+#             */
/*   Updated: 2024/06/12 18:32:09 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
   private:
    const Fixed x;
    const Fixed y;

   public:
    Point();
    Point(const float _x, const float _y);
    Point(Point &oth);
    Point &operator=(const Point &oth);
    ~Point();
    Fixed getX() const { return x; };
    Fixed getY() const { return y; };
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif