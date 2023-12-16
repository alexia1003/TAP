#ifndef PUNCT2D_H
#define PUNCT2D_H

#include <iostream>
using namespace std;

class Punct2D {
public:
    double x, y;
    
    // Constructori si destructor
    Punct2D();
    Punct2D(double xVal, double yVal);
    ~Punct2D();

    // Operatori
    Punct2D& operator=(const Punct2D& other);

    bool operator<(const Punct2D& other) const;
    bool operator<=(const Punct2D& other) const;
    bool operator>(const Punct2D& other) const;
    bool operator>=(const Punct2D& other) const;
    bool operator==(const Punct2D& other) const;
    bool operator!=(const Punct2D& other) const;

    Punct2D operator+(const Punct2D& other) const;
    Punct2D operator-(const Punct2D& other) const;
    Punct2D operator*(double scalar) const;
    Punct2D operator/(double scalar) const;

    Punct2D& operator+=(const Punct2D& other);
    Punct2D& operator-=(const Punct2D& other);
    Punct2D& operator*=(double scalar);
    Punct2D& operator/=(double scalar);

    Punct2D& operator++(); 
    Punct2D operator++(int); 
    Punct2D& operator--(); 
    Punct2D operator--(int); 

    // functii prietene
    friend ostream& operator<<(ostream& os, const Punct2D& p);
};

#endif // PUNCT2D_H
