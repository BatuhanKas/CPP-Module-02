// bool bsp(Point const a, Point const b, Point const c, Point const point) {
//     // bool b1, b2, b3;

//     if (crossProduct(a, b, point) * crossProduct(a, c, point) >= 0)
//         return false;
//     if (crossProduct(b, c, point) * crossProduct(b, a, point) >= 0)
//         return false;
//     else
//         return true;

//     // b1 = crossProduct(point, a, b) < 0.0f;
//     // b2 = crossProduct(point, b, c) < 0.0f;
//     // b3 = crossProduct(point, c, a) < 0.0f;

//     // if (b1 * b2 * b3 == 0) return false;

//     // return ((b1 == b2) && (b2 == b3));
// }

// if (crossProduct(point, a, b) * crossProduct(point, a, c) >= 0) return false;
// if (crossProduct(point, b, c) * crossProduct(point, b, a) >= 0)
//     return false;
// else
//     return true;

static Fixed calculateDeterminant2x2(Point const a, Point const b) {
    return ((a.getX() * b.getY()) - (a.getY() * b.getX()));
}

static Fixed fixedABS(Fixed value) {
    return ((value < 0) ? (value * -1) : value);
}

static Fixed calculateTriangleArea(Point const a, Point const b,
                                   Point const c) {
    Fixed ab = calculateDeterminant2x2(a, b);
    Fixed bc = calculateDeterminant2x2(b, c);
    Fixed ca = calculateDeterminant2x2(c, a);
    return (fixedABS(((ab + bc + ca) / 2)));
}