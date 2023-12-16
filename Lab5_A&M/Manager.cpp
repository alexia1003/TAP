#include "Manager.h"
#include <iostream>

// Constructori

Manager::Manager() : Angajat(), nrSubordonati(0) {}

Manager::Manager(double tarifOrar, int nrOre, int nrSubordonati)
    : Angajat(tarifOrar, nrOre), nrSubordonati(nrSubordonati) {}

Manager::Manager(const Manager& manager) : Angajat(manager), nrSubordonati(manager.nrSubordonati) {}

Manager::~Manager() {}

// getter pt nrSubordonati
int Manager::getNrSubordonati() const {
    return nrSubordonati;
}

// supraincarcare met. pt adaugare bonus 50%
double Manager::getSalar() const {
    return Angajat::getSalar() * 1.5;
}
