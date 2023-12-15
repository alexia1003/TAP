// Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex {
private:
    double re;
    double im;

public:
    // Constructori
    Complex();
    Complex(double re);
    Complex(double re, double im);
    Complex(const Complex& other);

    // Operatii de baza
    Complex aduna(const Complex& other) const;
    Complex scade(const Complex& other) const;
    Complex inmulteste(const Complex& other) const;
    Complex imparte(const Complex& other) const;

    // Metode suplimentare
    Complex simplifica() const;
    double modul() const;
    Complex conjugat() const;

    // Afisare
    void afiseazaComplex() const;

    // Supraincarcare operatori prin functii 
    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    Complex operator/(const Complex& other) const;
    bool operator==(const Complex& other) const;
    bool operator!=(const Complex& other) const;

};

// Functii prietene
bool operator==(const Complex& c1, const Complex& c2) {
    return c1.re == c2.re && c1.im == c2.im;
}

bool operator!=(const Complex& c1, const Complex& c2) {
    return !(c1 == c2);
}

#endif // COMPLEX_H
