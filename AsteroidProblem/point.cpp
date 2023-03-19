#include "point.h"

const int Point::bounds = 100;

Point::Point(long double x = 0.0, long double y = 0.0, long double z = 0.0) : m_x{ x }, m_y{ y }, m_z{ z } {}
Point::Point(long long x, long long y, long long z) : Point(static_cast<long double>(x), static_cast<long double>(y), static_cast<long double>(z)) {}

long double Point::getDistance(const Point &p1, const Point &p2)
{
	using std::powl, std::sqrtl;
	return sqrtl(powl(p1.m_x - p2.m_x, 2) + powl(p1.m_y - p2.m_y, 2) + powl(p1.m_z - p2.m_z, 2));
}

bool Point::operator==(const Point& other) const {
	return (std::abs(m_x - other.m_x) < 0.1) && (std::abs(m_y - other.m_y) < 0.1) && (std::abs(m_z - other.m_z) < 0.1);
}

std::ostream& operator<<(std::ostream& out, const Point& p)
{
	out << p.m_x << " " << p.m_y << " " << p.m_z;
	return out;
}