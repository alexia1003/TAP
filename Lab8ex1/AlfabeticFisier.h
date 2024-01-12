#ifndef ALFABETICFISIER_H
#define ALFABETICFISIER_H

#include <string>
#include <set>

using namespace std;

class AlfabeticFisier {
public:
    void proceseazaCuvinte(const string& numeFisierIntrare, const string& numeFisierIesire);

private:
    void adaugaInSet(set<string>& cuvinteUnice, const string& cuvant);
};

#endif // ALFABETICFISIER_H
