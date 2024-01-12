#include "AlfabeticFisier.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;

void AlfabeticFisier::proceseazaCuvinte(const string& numeFisierIntrare, const string& numeFisierIesire) {
    ifstream fisierIntrare(numeFisierIntrare);

    if (!fisierIntrare.is_open()) {
        cout << "Eroare la deschiderea fisierului de intrare." << endl;
        return;
    }

    set<string> cuvinteUnice;

    string cuvant;
    while (fisierIntrare >> cuvant) {
        if (!cuvant.empty()) {
            adaugaInSet(cuvinteUnice, cuvant);
        }
    }

    fisierIntrare.close();

    ofstream fisierIesire(numeFisierIesire);

    if (!fisierIesire.is_open()) {
        cout << "Eroare la deschiderea fisierului de iesire." << endl;
        return;
    }

    for (const auto& cuvantUnic : cuvinteUnice) {
        fisierIesire << cuvantUnic << endl;
    }

    fisierIesire.close();

    cout << "Scrierea in fisier s-a realizat cu succes." << endl;
}

void AlfabeticFisier::adaugaInSet(set<string>& cuvinteUnice, const string& cuvant) {
    cuvinteUnice.insert(cuvant);
}
