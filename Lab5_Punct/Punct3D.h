#ifndef PUNCT3D_H
#define PUNCT3D_H

#include "Punct2D.h"

#include <iostream>
using namespace std;

class Punct3D : public Punct2D {
public:
    double z;

    // Constructori si destructor
    Punct3D();
    Punct3D(double xVal, double yVal, double zVal);
    ~Punct3D();

    // Operatori
    Punct3D& operator=(const Punct3D& other);

    // Supraincarcare
    bool operator<(const Punct3D& other) const;
    bool operator<=(const Punct3D& other) const;
    bool operator>(const Punct3D& other) const;
    bool operator>=(const Punct3D& other) const;
    bool operator==(const Punct3D& other) const;
    bool operator!=(const Punct3D& other) const;

    Punct3D operator+(const Punct3D& other) const;
    Punct3D operator-(const Punct3D& other) const;
    Punct3D operator*(double scalar) const;
    Punct3D operator/(double scalar) const;

    Punct3D& operator+=(const Punct3D& other);
    Punct3D& operator-=(const Punct3D& other);
    Punct3D& operator*=(double scalar);
    Punct3D& operator/=(double scalar);

    Punct3D& operator++();
    Punct3D operator++(int);
    Punct3D& operator--();
    Punct3D operator--(int);

    // Suprascriere met. distanta pt. 3D
    double distanta(const Punct3D& other) const;

    // functii prietene
    friend ostream& operator<<(ostream& os, const Punct3D& p);
};

#endif // PUNCT3D_H
