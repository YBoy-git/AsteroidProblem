#include "asteroidFind.h"

Point findAsteroidCoords(const Point& asteroid) {
    using namespace std;

    const Point probe1(0.0l, 0.0, 0.0);
    const Point probe2{ static_cast<long double>(Point::bounds),0.0,0.0 };

    const long double a{ Point::getDistance(probe1, asteroid) };
    const long double b{ Point::getDistance(probe2, asteroid) };
    const long double p{ (a + b + Point::bounds) / 2.0 };
    const long double area{ sqrtl(p * (p - a) * (p - b) * (p - Point::bounds)) };
    const long double h{ (2 * area) / Point::bounds };
    const long double x{ sqrtl(roundl(powl(a,2) - powl(h,2))) };

    if (h == 0) {
        return Point{ x,0,0 };
    }

    const Point probe3{ x,0,h };
    const long double c{ Point::getDistance(probe3, asteroid) };
    const long double corner{ 2.0 * asinl(c / (2.0 * h)) };
    const long double y{ h * sinl(corner) };
    const long double z{ h * cosl(corner) };

    return Point{ x,y,z };
}