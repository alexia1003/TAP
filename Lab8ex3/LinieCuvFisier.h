#ifndef LINIECUVFISIER_H
#define LINIECUVFISIER_H

#include <string>
#include <map>

using namespace std;

class LinieCuvFisier {
public:
    void numaraCuvinte(const string& numeFisierIntrare, const string& numeFisierIesire);

private:
    void proceseazaLinie(const string& linie, unsigned numarLinie);
    void scrieRezultate(const string& numeFisierIesire);

    map<unsigned, map<string, unsigned>> aparitiiCuvinteLinie;
};

#endif // LINIECUVFISIER_H
