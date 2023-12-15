// main.cpp
#include "Complex.h"
#include <iostream>

using namespace std;

int main() {
    
    // nr. complexe
    Complex complex1(2, 3);
    Complex complex2(1, -2);

    // operatii de baza
    Complex sum = complex1 + complex2;
    Complex dif = complex1 - complex2;
    Complex prod = complex1 * complex2;
    Complex imp = complex1 / complex2;

    // afisare rezultat
    cout << "Suma: ";
    sum.afiseazaComplex();

    cout << "Diferenta: ";
    dif.afiseazaComplex();

    cout << "Produs: ";
    prod.afiseazaComplex();

    cout << "Impartire: ";
    imp.afiseazaComplex();

    // Modul si Conjugat
    double modul = complex1.modul();
    Complex conjugat = complex1.conjugat();

    cout << "modul complex1: " << modul << endl;
    cout << "conjugat complex1: ";
    conjugat.afiseazaComplex();

    // comparatii
    if (complex1 == complex2) {
        cout << "Nr. complexe sunt egale" << endl;
    } else {
        cout << "Nr. complexe nu sunt egale" << endl;
    }

    if (complex1 != complex2) {
        cout << "Nr. complexe nu sunt egale" << endl;
    } else {
        cout << "Nr. complexe sunt egale" << endl;
    }

    return 0;
}
