// Complex.cpp
#include "Complex.h"
#include <cmath>
#include <iostream>

// Implementare constructori
Complex::Complex() : re(0.0), im(0.0) {}

Complex::Complex(double re) : re(re), im(0.0) {}

Complex::Complex(double re, double im) : re(re), im(im) {}

Complex::Complex(const Complex& other) : re(other.re), im(other.im) {}

// Implementare operatii de baza
Complex Complex::aduna(const Complex& other) const {
    return Complex(re + other.re, im + other.im);
}

Complex Complex::scade(const Complex& other) const {
    return Complex(re - other.re, im - other.im);
}

Complex Complex::inmulteste(const Complex& other) const {
    return Complex(re * other.re - im * other.im, re * other.im + im * other.re);
}

Complex Complex::imparte(const Complex& other) const {
    double d = other.re * other.re + other.im * other.im;
    return Complex((re * other.re + im * other.im) / d, (im * other.re - re * other.im) / d);
}

// Implementare supraincarcare operatori
Complex Complex::operator+(const Complex& other) const {
    return aduna(other);
}

Complex Complex::operator-(const Complex& other) const {
    return scade(other);
}

Complex Complex::operator*(const Complex& other) const {
    return inmulteste(other);
}

Complex Complex::operator/(const Complex& other) const {
    return imparte(other);
}

bool Complex::operator==(const Complex& other) const {
    return re == other.re && im == other.im;
}

bool Complex::operator!=(const Complex& other) const {
    return !(*this == other);
}

