#include "Carte.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<Carte> biblioteca;

    biblioteca.push_back(Carte("Autor1", "Titlu1", "ISBN1", 25.99));
    biblioteca.push_back(Carte("Autor2", "Titlu2", "ISBN2", 19.99));
    biblioteca.push_back(Carte("Autor1", "Titlu3", "ISBN3", 29.99));

    // autor de la tastatura
    string autorCautat;
    cout << "Introduceti numele autorului: ";
    cin >> autorCautat;

    // afisare carti cu autorul citit de la tastatura
    for (const auto& carte : biblioteca) {
        if (carte.getAutor() == autorCautat) {
            carte.afiseaza();
        }
    }

    // afisare nr. de instante
    cout << "Numarul total de carti: " << Carte::getNumarInstante() << endl;

    return 0;
}
