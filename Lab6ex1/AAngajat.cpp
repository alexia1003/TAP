#include "AAngajat.h"
#include <iostream>

using namespace std;

AAngajat::AAngajat(string CNP, string nume, string email, string departament)
    : Persoana(CNP, nume), email(email), departament(departament) {}

AAngajat::~AAngajat() {}

string AAngajat::getDepartament() const {
    return departament;
}

string AAngajat::detalii() const {
    return "Angajatul " + nume + " face parte din departamentul " + getDepartament();
}
