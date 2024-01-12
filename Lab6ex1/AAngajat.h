#pragma once
#include "Persoana.h"

using namespace std;

class AAngajat : public Persoana {
public:
    AAngajat(string CNP, string nume, string email, string departament);
    virtual ~AAngajat();
    string getDepartament() const;
    virtual string detalii() const override;

private:
    string email;
    string departament;
};
