#ifndef CARTE_H
#define CARTE_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Carte {
private:
    string autor;
    string titlu;
    string ISBN;
    double pret;

    // nr. de instante
    static int numarInstante;

public:
    Carte(const string& autor, const string& titlu, const string& ISBN, double pret);
    
    // met. inline si const
    inline const string& getAutor() const { return autor; }
    inline const string& getTitlu() const { return titlu; }
    inline const string& getISBN() const { return ISBN; }
    inline double getPret() const { return pret; }

    // met. statica pentru nr. de instante
    static int getNumarInstante();

    // met. pt. afisare info. despre carte
    void afiseaza() const;
};

#endif // CARTE_H
