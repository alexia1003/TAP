#include "Angajat.h"
#include <iostream>

using namespace std;

// Constructori

Angajat::Angajat() : tarifOrar(5.5), nrOre(0) {}

Angajat::Angajat(int nrOre) : tarifOrar(5.5), nrOre(nrOre) {}

Angajat::Angajat(double tarifOrar, int nrOre) : tarifOrar(tarifOrar), nrOre(nrOre) {}

Angajat::Angajat(const Angajat& angajat) : tarifOrar(angajat.tarifOrar), nrOre(angajat.nrOre) {}

Angajat::~Angajat() {}

// met.  calculul salariului
double Angajat::getSalar() const {
    return tarifOrar * nrOre;
}

// met. aflare val. tarifOrar
double Angajat::getTarifOrar() const {
    return tarifOrar;
}

// supraincarcare op. >>
Angajat Angajat::citireAngajat() {
    Angajat angajat;
    cout << "Introduceti tariful orar: ";
    cin >> angajat.tarifOrar;
    cout << "Introduceti numarul de ore lucrate: ";
    cin >> angajat.nrOre;
    return angajat;
}

// supraincarcare op. <<
void Angajat::afisAngajat() const {
    cout << "Tarif orar: " << tarifOrar << endl;
    cout << "Numar ore lucrate: " << nrOre << endl;
    cout << "Salariu: " << getSalar() << endl;
}
