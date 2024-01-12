#include "LinieCuvFisier.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;

void LinieCuvFisier::numaraCuvinte(const string& numeFisierIntrare, const string& numeFisierIesire) {
    ifstream fisierIntrare(numeFisierIntrare);

    if (!fisierIntrare.is_open()) {
        cout << "Eroare la deschiderea fisierului de intrare." << endl;
        return;
    }

    string linie;
    unsigned numarLinie = 1;
    while (getline(fisierIntrare, linie)) {
        proceseazaLinie(linie, numarLinie);
        ++numarLinie;
    }

    fisierIntrare.close();

    scrieRezultate(numeFisierIesire);

    cout << "Scrierea in fisier s-a realizat cu succes." << endl;
}

void LinieCuvFisier::proceseazaLinie(const string& linie, unsigned numarLinie) {
    istringstream iss(linie);
    string cuvant;

    while (iss >> cuvant) {
        if (!cuvant.empty()) {
            // incrementare nr. aparitii cuvant in map
            ++aparitiiCuvinteLinie[numarLinie][cuvant];
        }
    }
}

void LinieCuvFisier::scrieRezultate(const string& numeFisierIesire) {
    ofstream fisierIesire(numeFisierIesire);

    if (!fisierIesire.is_open()) {
        cout << "Eroare la deschiderea fisierului de iesire." << endl;
        return;
    }

    // scriere rezultate în fisierul de iesire
    for (const auto& intrareLinie : aparitiiCuvinteLinie) {
        unsigned numarLinie = intrareLinie.first;
        const auto& aparitiiCuvinte = intrareLinie.second;

        fisierIesire << "Linia " << numarLinie << ":" << endl;

        for (const auto& intrareCuvant : aparitiiCuvinte) {
            const string& cuvant = intrareCuvant.first;
            unsigned numarAparitii = intrareCuvant.second;

            fisierIesire << "  " << cuvant << ": " << numarAparitii << endl;
        }

        fisierIesire << endl;
    }

    fisierIesire.close();
}
