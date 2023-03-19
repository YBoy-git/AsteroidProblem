#ifndef POINT_H
#define POINT_H

#include <cmath>
#include <iostream>

class Point {
private:
	long double m_x, m_y, m_z;
	
public:
	const static int bounds;

	Point(long double x, long double y, long double z);
	Point(long long x, long long y, long long z);

	static long double getDistance(const Point&, const Point&);

	bool operator==(const Point& other) const;
	friend std::ostream& operator<<(std::ostream& out, const Point& p);
};

#endif // POINT_H