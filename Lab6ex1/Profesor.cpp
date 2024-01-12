#include "Profesor.h"
#include <iostream>

using namespace std;

Profesor::Profesor(string CNP, string nume, string email, string materie)
    : Persoana(CNP, nume), email(email), materie(materie) {}

Profesor::~Profesor() {}

string Profesor::getMaterie() const {
    return materie;
}

string Profesor::detalii() const {
    return "Profesorul " + nume + " preda " + getMaterie();
}
