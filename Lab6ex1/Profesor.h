#pragma once
#include "Persoana.h"

using namespace std;

class Profesor : public Persoana {
public:
    Profesor(string CNP, string nume, string email, string materie);
    virtual ~Profesor();
    string getMaterie() const;
    virtual string detalii() const override;

private:
    string email;
    string materie;
};
