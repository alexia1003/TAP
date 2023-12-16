#include "Punct2D.h"
#include <iostream>
#include <cmath>

using namespace std;

// metode cls. Punct2D

Punct2D::Punct2D() : x(0.0), y(0.0) {}

Punct2D::Punct2D(double xVal, double yVal) : x(xVal), y(yVal) {}

Punct2D::~Punct2D() {}

Punct2D& Punct2D::operator=(const Punct2D& other) {
    if (this != &other) {
        x = other.x;
        y = other.y;
    }
    return *this;
}

bool Punct2D::operator<(const Punct2D& other) const {
    return (x < other.x) || ((x == other.x) && (y < other.y));
}

bool Punct2D::operator<=(const Punct2D& other) const {
    return (*this < other) || (*this == other);
}

bool Punct2D::operator>(const Punct2D& other) const {
    return !(*this <= other);
}

bool Punct2D::operator>=(const Punct2D& other) const {
    return !(*this < other);
}

bool Punct2D::operator==(const Punct2D& other) const {
    return (x == other.x) && (y == other.y);
}

bool Punct2D::operator!=(const Punct2D& other) const {
    return !(*this == other);
}

Punct2D Punct2D::operator+(const Punct2D& other) const {
    return Punct2D(x + other.x, y + other.y);
}

Punct2D Punct2D::operator-(const Punct2D& other) const {
    return Punct2D(x - other.x, y - other.y);
}

Punct2D Punct2D::operator*(double scalar) const {
    return Punct2D(x * scalar, y * scalar);
}

Punct2D Punct2D::operator/(double scalar) const {
    if (scalar != 0) {
        return Punct2D(x / scalar, y / scalar);
    } else {
        cout << "Eroare: Impartire la zero." << endl;
        return *this;
    }
}

Punct2D& Punct2D::operator+=(const Punct2D& other) {
    x += other.x;
    y += other.y;
    return *this;
}

Punct2D& Punct2D::operator-=(const Punct2D& other) {
    x -= other.x;
    y -= other.y;
    return *this;
}

Punct2D& Punct2D::operator*=(double scalar) {
    x *= scalar;
    y *= scalar;
    return *this;
}

Punct2D& Punct2D::operator/=(double scalar) {
    if (scalar != 0) {
        x /= scalar;
        y /= scalar;
    } else {
        cout << "Eroare: Impartire la zero." << endl;
    }
    return *this;
}

Punct2D& Punct2D::operator++() {
    ++x;
    ++y;
    return *this;
}

Punct2D Punct2D::operator++(int) {
    Punct2D temp(*this);
    ++(*this);
    return temp;
}

Punct2D& Punct2D::operator--() {
    --x;
    --y;
    return *this;
}

Punct2D Punct2D::operator--(int) {
    Punct2D temp(*this);
    --(*this);
    return temp;
}

// flux de iesire ostream
ostream& operator<<(ostream& os, const Punct2D& p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
// ret. flux de iesire modif. os
}
