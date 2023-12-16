// fractie.cpp
#include "LAB4ex1TAP.h"

// Supraincarcarea operatorilor
Fractie Fractie::operator+(const Fractie& other) const {
    Fractie rezultat;
    rezultat.numarator = this->numarator * other.numitor + other.numarator * this->numitor;
    rezultat.numitor = this->numitor * other.numitor;
    return rezultat;
    //return this->aduna(other);
}

Fractie Fractie::operator-(const Fractie& other) const {
    Fractie rezult;
    rezult.numarator = this->numarator * other.numitor - other.numarator * this->numitor;
    rezult.numitor = this->numitor * other.numitor;
    return rezult;
    //return this->scade(other);
}

Fractie Fractie::operator*(const Fractie& other) const {
    Fractie rez;
    rez.numarator = this->numarator * other.numarator;
    rez.numitor = this->numitor * other.numitor;
    return rez;
    //return this->inmulteste(other);
}

Fractie Fractie::operator/(const Fractie& other) const {
    Fractie r;
    r.numarator = this->numarator * other.numitor;
    r.numitor = this->numitor * other.numarator;
    return r;
    //return this->imparte(other);
}

bool Fractie::operator<(const Fractie& other) const {
    return (this->numarator * other.numitor) < (other.numarator * this->numitor);
}

bool Fractie::operator>(const Fractie& other) const {
    return (this->numarator * other.numitor) > (other.numarator * this->numitor);
}

bool Fractie::operator<=(const Fractie& other) const {
    return (this->numarator * other.numitor) <= (other.numarator * this->numitor);
}

bool Fractie::operator>=(const Fractie& other) const {
    return (this->numarator * other.numitor) >= (other.numarator * this->numitor);
}

bool Fractie::operator!=(const Fractie& other) const {
    return (this->numarator * other.numitor) != (other.numarator * this->numitor);
}

bool Fractie::operator==(const Fractie& other) const {
    return (this->numarator * other.numitor) == (other.numarator * this->numitor);
}

// Supraincarcare functii prietene
Fractie operator+(const Fractie& f1, const Fractie& f2) {
    return f1.aduna(f2);
}

Fractie operator-(const Fractie& f1, const Fractie& f2) {
    return f1.scade(f2);
}

Fractie operator*(const Fractie& f1, const Fractie& f2) {
    return f1.inmulteste(f2);
}

Fractie operator/(const Fractie& f1, const Fractie& f2) {
    return f1.imparte(f2);
}

bool operator<(const Fractie& f1, const Fractie& f2) {
    return (f1.numarator * f2.numitor) < (f2.numarator * f1.numitor);
}

bool operator>(const Fractie& f1, const Fractie& f2) {
    return (f1.numarator * f2.numitor) > (f2.numarator * f1.numitor);
}

bool operator<=(const Fractie& f1, const Fractie& f2) {
    return (f1 < f2) || (f1 == f2);
}

bool operator>=(const Fractie& f1, const Fractie& f2) {
    return (f1 > f2) || (f1 == f2);
}

bool operator!=(const Fractie& f1, const Fractie& f2) {
    return !(f1 == f2);
}

bool operator==(const Fractie& f1, const Fractie& f2) {
    return (f1.numarator * f2.numitor) == (f2.numarator * f1.numitor);
}
