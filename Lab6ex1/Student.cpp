#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(string CNP, string nume, string email, double nota)
    : Persoana(CNP, nume), email(email), nota(nota) {}

Student::~Student() {}

double Student::getNota() const {
    return nota;
}

string Student::detalii() const {
    return "Studentul " + nume + " are nota " + to_string(getNota());
}
