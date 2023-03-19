#include <iostream>
#include "point.h"
#include <random>
#include <cmath>
#include <iostream>
#include "asteroidGet.h"
#include "asteroidFind.h"

int main()
{
	Point asteroid{ getAsteroid() };
	std::cout << "Actual coords: " << asteroid << "\n"
		      << "Found coords: " << findAsteroidCoords(asteroid) << "\n";
}