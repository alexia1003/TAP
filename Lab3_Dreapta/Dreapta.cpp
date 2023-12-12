#include "Dreapta.h"
#include <iostream>

using namespace std;

// Implementarea constructorului cu 2 parametrii
Dreapta::Dreapta(double m_val, double n_val) : m(m_val), n(n_val) {}

// Implementarea constructorului de copiere
Dreapta::Dreapta(const Dreapta &other) : m(other.m), n(other.n) {
    cout << "Apel constructor de copiere\n";
}

// Implementarea destructorului
Dreapta::~Dreapta() {
    cout << "Apel destructor\n";
}

// Metoda afișare ecuatia dreptei
void Dreapta::afiseazaEcuatie() const {
    cout << "Ecuația dreptei: y = " << m << "x + " << n << "\n";
}
