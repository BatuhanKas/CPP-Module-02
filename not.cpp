bool bsp(Point const a, Point const b, Point const c, Point const point) {
    // bool b1, b2, b3;

    if (crossProduct(a, b, point) * crossProduct(a, c, point) >= 0)
        return false;
    if (crossProduct(b, c, point) * crossProduct(b, a, point) >= 0)
        return false;
    else
        return true;

    // b1 = crossProduct(point, a, b) < 0.0f;
    // b2 = crossProduct(point, b, c) < 0.0f;
    // b3 = crossProduct(point, c, a) < 0.0f;

    // if (b1 * b2 * b3 == 0) return false;

    // return ((b1 == b2) && (b2 == b3));
}

if (crossProduct(point, a, b) * crossProduct(point, a, c) >= 0) return false;
if (crossProduct(point, b, c) * crossProduct(point, b, a) >= 0)
    return false;
else
    return true;