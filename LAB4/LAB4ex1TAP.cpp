// fractie.cpp
#include "LAB4ex1TAP.h"

// Supraincarcarea operatorilor
Fractie Fractie::operator+(const Fractie& other) const {
    return this->aduna(other);
}

Fractie Fractie::operator-(const Fractie& other) const {
    return this->scade(other);
}

Fractie Fractie::operator*(const Fractie& other) const {
    return this->inmulteste(other);
}

Fractie Fractie::operator/(const Fractie& other) const {
    return this->imparte(other);
}

bool Fractie::operator<(const Fractie& other) const {
}

bool Fractie::operator>(const Fractie& other) const {
}

bool Fractie::operator<=(const Fractie& other) const {
}

bool Fractie::operator>=(const Fractie& other) const {
}

bool Fractie::operator!=(const Fractie& other) const {
}

bool Fractie::operator==(const Fractie& other) const {
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
}

bool operator>(const Fractie& f1, const Fractie& f2) {
}

bool operator<=(const Fractie& f1, const Fractie& f2) {
}

bool operator>=(const Fractie& f1, const Fractie& f2) {
}

bool operator!=(const Fractie& f1, const Fractie& f2) {
}

bool operator==(const Fractie& f1, const Fractie& f2) {
}
