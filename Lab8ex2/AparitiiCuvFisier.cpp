#include "AparitiiCuvFisier.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;

void AparitiiCuvFisier::numaraCuvinte(const std::string& numeFisierIntrare, const std::string& numeFisierIesire) {
    ifstream fisierIntrare(numeFisierIntrare);

    if (!fisierIntrare.is_open()) {
        cout << "Eroare la deschiderea fisierului de intrare." << endl;
        return;
    }

    string cuvant;
    while (fisierIntrare >> cuvant) {
        if (!cuvant.empty()) {
            proceseazaCuvant(cuvant);
        }
    }

    fisierIntrare.close();

    scrieRezultate(numeFisierIesire);

    cout << "Procesul s-a incheiat cu succes." << endl;
}

void AparitiiCuvFisier::proceseazaCuvant(const string& cuvant) {
    // incrementare nr. aparitii cuvant in map
    ++aparitiiCuvinte[cuvant];
}

void AparitiiCuvFisier::scrieRezultate(const string& numeFisierIesire) {
    ofstream fisierIesire(numeFisierIesire);

    if (!fisierIesire.is_open()) {
        cout << "Eroare la deschiderea fisierului de iesire." << endl;
        return;
    }

    // scriere rezultat în fisier de iesire 
    for (const auto& intrare : aparitiiCuvinte) {
        fisierIesire << intrare.first << ": " << intrare.second << endl;
    }

    fisierIesire.close();
}
