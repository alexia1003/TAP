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
    void afiseazaFractie();

 // Operatii de baza
    Fractie aduna(const Fractie& other) const;
    Fractie scade(const Fractie& other) const;
    Fractie inmulteste(const Fractie& other) const;
    Fractie imparte(const Fractie& other) const;

    // Metoda statica pentru calculul cmmdc
    static int cmmdc(int a, int b);

    // Metode suplimentare
    Fractie simplifica() const;
    Fractie reciproc() const;
    bool egal(const Fractie& other) const;
    void print() const;
};

#endif // FRACTIE_H
