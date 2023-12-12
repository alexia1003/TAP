#include "Carte.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// init. var. statice
int Carte::numarInstante = 0;  

Carte::Carte(const string& autor, const string& titlu, const string& ISBN, double pret)
    : autor(autor), titlu(titlu), ISBN(ISBN), pret(pret) {
    ++numarInstante;  
    // nr. de instante la fiecare creare a unei carti
}

int Carte::getNumarInstante() {
    return numarInstante;
}

void Carte::afiseaza() const {
    cout << "Autor: " << autor << "\nTitlu: " << titlu << "\nISBN: " << ISBN << "\nPret: " << pret << "\n\n";
}
