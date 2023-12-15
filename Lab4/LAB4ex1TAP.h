// fractie.h
#ifndef FRACTIE_H
#define FRACTIE_H

#include <iostream>

class Fractie {
private:
    int numarator;
    int numitor;

public:
    Fractie();
    Fractie(int numarator);
    Fractie(int numarator, int numitor);
    Fractie(const Fractie& other);

    void afiseazaFractie() const;

    // Operatii de baza
    Fractie aduna(const Fractie& other) const;
    Fractie scade(const Fractie& other) const;
    Fractie inmulteste(const Fractie& other) const;
    Fractie imparte(const Fractie& other) const;

    // Calculul cmmdc
    static int cmmdc(int a, int b);

    // Alte metode
    Fractie simplifica() const;
    Fractie reciproc() const;
    bool egal(const Fractie& other) const;
    void print() const;

    // Supraincarcarea operatorilor
    Fractie operator+(const Fractie& other) const;
    Fractie operator-(const Fractie& other) const;
    Fractie operator*(const Fractie& other) const;
    Fractie operator/(const Fractie& other) const;
    bool operator<(const Fractie& other) const;
    bool operator>(const Fractie& other) const;
    bool operator<=(const Fractie& other) const;
    bool operator>=(const Fractie& other) const;
    bool operator!=(const Fractie& other) const;
    bool operator==(const Fractie& other) const;

    // Supraincarcare functii prietene
    friend Fractie operator+(const Fractie& f1, const Fractie& f2);
    friend Fractie operator-(const Fractie& f1, const Fractie& f2);
    friend Fractie operator*(const Fractie& f1, const Fractie& f2);
    friend Fractie operator/(const Fractie& f1, const Fractie& f2);
    friend bool operator<(const Fractie& f1, const Fractie& f2);
    friend bool operator>(const Fractie& f1, const Fractie& f2);
    friend bool operator<=(const Fractie& f1, const Fractie& f2);
    friend bool operator>=(const Fractie& f1, const Fractie& f2);
    friend bool operator!=(const Fractie& f1, const Fractie& f2);
    friend bool operator==(const Fractie& f1, const Fractie& f2);
};

#endif // FRACTIE_H

