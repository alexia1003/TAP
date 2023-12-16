#include "Punct3D.h"
#include <iostream>
#include <cmath>
using namespace std;

// metode cls. Punct3D

Punct3D::Punct3D() : Punct2D(), z(0.0) {}

Punct3D::Punct3D(double xVal, double yVal, double zVal) : Punct2D(xVal, yVal), z(zVal) {}

Punct3D::~Punct3D() {}

Punct3D& Punct3D::operator=(const Punct3D& other) {
    if (this != &other) {
        // op. de atribuire cls. Punct2D
        Punct2D::operator=(other);
        // operatii pt. Punct3D
        z = other.z;
    }
    return *this;
}


bool Punct3D::operator<(const Punct3D& other) const {
    return (x < other.x) || ((x == other.x) && ((y < other.y) || ((y == other.y) && (z < other.z))));
}

bool Punct3D::operator<=(const Punct3D& other) const {
    return (x < other.x) || ((x == other.x) && ((y < other.y) || ((y == other.y) && (z <= other.z))));
}

bool Punct3D::operator>(const Punct3D& other) const {
    return !(*this <= other);
}

bool Punct3D::operator>=(const Punct3D& other) const {
    return !(*this < other);
}

bool Punct3D::operator==(const Punct3D& other) const {
    return Punct2D::operator==(other) && (z == other.z);
}

bool Punct3D::operator!=(const Punct3D& other) const {
    return !(*this == other);
}

Punct3D Punct3D::operator+(const Punct3D& other) const {
    return Punct3D(x + other.x, y + other.y, z + other.z);
}

Punct3D Punct3D::operator-(const Punct3D& other) const {
    return Punct3D(x - other.x, y - other.y, z - other.z);
}

Punct3D Punct3D::operator*(double scalar) const {
    return Punct3D(x * scalar, y * scalar, z * scalar);
}

Punct3D Punct3D::operator/(double scalar) const {
    if (scalar != 0) {
        return Punct3D(x / scalar, y / scalar, z / scalar);
    } else {
        return Punct3D();
    }
}

double Punct3D::distanta(const Punct3D& other) const {
    double dX = x - other.x;
    double dY = y - other.y;
    double dZ = z - other.z;
    return sqrt(dX * dX + dY * dY + dZ * dZ);
}

// flux de iesire ostream
ostream& operator<<(ostream& os, const Punct3D& p) {
    os << "(" << p.x << ", " << p.y << ", " << p.z << ")";
    return os;
// ret. flux de iesire modif. os  
}
