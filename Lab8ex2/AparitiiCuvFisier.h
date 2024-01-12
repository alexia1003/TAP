#ifndef APARITIICUVFISIER_H
#define APARITIICUVFISIER_H

#include <string>
#include <map>

using namespace std;

class AparitiiCuvFisier {
public:
    void numaraCuvinte(const string& numeFisierIntrare, const string& numeFisierIesire);

private:
    void proceseazaCuvant(const string& cuvant);
    void scrieRezultate(const string& numeFisierIesire);

    map<string, unsigned> aparitiiCuvinte;
};

#endif // APARITIICUVFISIER_H
