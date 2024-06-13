/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:25:55 by bkas              #+#    #+#             */
/*   Updated: 2024/06/13 15:32:11 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/Point.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ********************** [v] CALCULATE FUNCTIONS [v] ********************** */

static Fixed calculateABS(Fixed value) {
    return value < 0 ? value * -1 : value;
}

static Fixed Determinant2x2(Point const a, Point const b) {
    return (a.getX() * b.getY()) - (a.getY() * b.getX());
}

static Fixed calculateArea(Point const a, Point const b, Point const c) {
    Fixed ab = Determinant2x2(a, b);
    Fixed bc = Determinant2x2(b, c);
    Fixed ca = Determinant2x2(c, a);

    Fixed area = calculateABS((ca + bc + ab) / 2);
    return area;
}

/* ********************** [^] CALCULATE FUNCTIONS [^] ********************** */

/* ****************************** [v] BSP [v] ****************************** */

bool bsp(Point const a, Point const b, Point const c, Point const p) {
    Fixed abp = calculateArea(a, b, p);
    Fixed acp = calculateArea(a, c, p);
    Fixed bcp = calculateArea(b, c, p);
    Fixed abc = calculateArea(a, b, c);

    cout << "acp: " << acp << endl;
    cout << "bcp: " << bcp << endl;
    cout << "abp: " << abp << endl;
    cout << "abc: " << abc << endl;

    if (abp != 0 && acp != 0 && bcp != 0)
        if (abp + acp + bcp == abc) return (true);
    return (false);
}

/* ****************************** [^] BSP [^] ****************************** */