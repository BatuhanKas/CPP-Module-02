/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:25:46 by bkas              #+#    #+#             */
/*   Updated: 2024/06/13 10:48:00 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *************************** [v] INCLUDES [v]  *************************** */

#include "../inc/Point.hpp"

/* *************************** [^] INCLUDES [^]  *************************** */

/* ************************** [v] POINT CLASS [v] ************************** */

Point::Point() : x(0), y(0){};

Point::Point(const float _x, const float _y) : x(_x), y(_y){};

Point::Point(Point const &oth) : x(oth.x), y(oth.y){};

Point::~Point(){};

Point &Point::operator=(const Point &oth) {
    if (this != &oth) {
        const_cast<Fixed &>(x) = oth.getX();
        const_cast<Fixed &>(y) = oth.getY();
    }
    return *this;
};

/* ************************** [^] POINT CLASS [^] ************************** */

/* *************************** [v] GET FUNCS [v] *************************** */

Fixed Point::getX() const { return x; };

Fixed Point::getY() const { return y; };

/* *************************** [^] GET FUNCS [^] *************************** */