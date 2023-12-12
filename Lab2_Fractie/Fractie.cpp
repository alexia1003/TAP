#include "Fractie.h"
#include <iostream>

using namespace std;

// Constructor cu 0 parametrii
Fractie::Fractie() : numarator(0), numitor(1) {}

// Constructor cu un singur parametru
Fractie::Fractie(int numarator) : numarator(numarator), numitor(1) {}

// Constructor cu 2 parametrii
Fractie::Fractie(int numarator, int numitor) : numarator(numarator), numitor(numitor) {}

// Copy - constructor
Fractie::Fractie(const Fractie& other) : numarator(other.numarator), numitor(other.numitor) {}

// Metoda pentru afișarea fractiei
void Fractie::afiseazaFractie() {
    cout << numarator << "/" << numitor << std::endl;
}

Fractie Fractie::aduna(const Fractie& other) const {
    int rezNumarator = numarator * other.numitor + other.numarator * numitor;
    int rezNumitor = numitor * other.numitor;
    return Fractie(rezNumarator, rezNumitor);
}

Fractie Fractie::scade(const Fractie& other) const {
    int rezNumarator = numarator * other.numitor - other.numarator * numitor;
    int rezNumitor = numitor * other.numitor;
    return Fractie(rezNumarator, rezNumitor);
}

Fractie Fractie::inmulteste(const Fractie& other) const {
    int rezNumarator = numarator * other.numarator;
    int rezNumitor = numitor * other.numitor;
    return Fractie(rezNumarator, rezNumitor);
}

Fractie Fractie::imparte(const Fractie& other) const {
    int rezNumarator = numarator * other.numitor;
    int rezNumitor = numitor * other.numarator;
    return Fractie(rezNumarator, rezNumitor);
}

int Fractie::cmmdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

Fractie Fractie::simplifica() const {
    int cmmdc_val = cmmdc(numarator, numitor);
    int rezNumarator = numarator / cmmdc_val;
    int rezNumitor = numitor / cmmdc_val;
    return Fractie(rezNumarator, rezNumitor);
}

Fractie Fractie::reciproc() const {
    if (numarator == 0) {
        cout << "Nu se poate calcula reciprocul pentru fractia 0." << std::endl;
        return Fractie(0, 1);
    }
    return Fractie(numitor, numarator);
}

bool Fractie::egal(const Fractie& other) const {
    Fractie fractie1 = this->simplifica();
    Fractie fractie2 = other.simplifica();
    return (fractie1.numarator == fractie2.numarator) && (fractie1.numitor == fractie2.numitor);
}

void Fractie::print() const {
    cout << numarator << "/" << numitor;
}



int main() {
    // Fractia initializata cu 0/1
    Fractie fractie1;
    cout << "Fractie 1: ";
    fractie1.afiseazaFractie();  // Output: 0/1

    // Fractia initializata cu numaratorul 3 si numitorul implicit 1
    Fractie fractie2(3);
    cout << "Fractie 1: ";
    fractie2.afiseazaFractie();  // Output: 3/1

    // Fractia initializata cu numaratorul 2 si numitorul 5
    Fractie fractie3(2, 5);
    cout << "Fractie 1: ";
    fractie3.afiseazaFractie();  // Output: 2/5

    Fractie fractieOriginala(4, 7);
    Fractie fractieNoua(fractieOriginala); // Utilizarea constructorului de copiere
    fractieNoua.afiseazaFractie(); // Va afișa fractia corespunzătoare fractieOriginala

// Operatii de baza
    Fractie suma = fractie1.aduna(fractie2);
    Fractie diferenta = fractie1.scade(fractie2);
    Fractie produs = fractie1.inmulteste(fractie2);
    Fractie raport = fractie1.imparte(fractie2);

    // Afisarea rezultatelor
    cout << "Suma: ";
    suma.afiseazaFractie();

    cout << "Diferenta: ";
    diferenta.afiseazaFractie();

    cout << "Produs: ";
    produs.afiseazaFractie();

    cout << "Raport: ";
    raport.afiseazaFractie();

    // Calculul CMMDC
    int cmmdc_val = Fractie::cmmdc(18, 24);
    cout << "CMMDC(18, 24): " << cmmdc_val << endl;

    // Simplificarea fractiei
    Fractie fractie6(6, 8);
    Fractie fractieSimplificata = fractie6.simplifica();
    cout << "Fractie initiala: ";
    fractie6.afiseazaFractie();
    cout << "Fractie simplificata: ";
    fractieSimplificata.afiseazaFractie();

    // Calculul reciprocului
    Fractie fractieReciproca = fractie1.reciproc();
    cout << "Reciprocul fractiei 2/3: ";
    fractieReciproca.afiseazaFractie();

    // Compararea a doua fractii
    Fractie fractie4(3, 4);
    Fractie fractie5(6, 8);

    if (fractie4.egal(fractie5)) {
        cout << "Fractiile sunt egale." << endl;
    } else {
        cout << "Fractiile nu sunt egale." << endl;
    }

    return 0;
}
