#include "asteroidGet.h"

long long getRandomCoord() {
    return rand() % Point::bounds;
}

Point getAsteroid() {
    srand(static_cast<unsigned int>(time(NULL)));
    return Point(getRandomCoord(), getRandomCoord(), getRandomCoord());
}