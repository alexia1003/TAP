#pragma once
#include "Persoana.h"

using namespace std;

class Student : public Persoana {
public:
    Student(string CNP, string nume, string email, double nota);
    virtual ~Student();
    double getNota() const;
    virtual string detalii() const override;

private:
    string email;
    double nota;
};
