#include "LSI.h"
#include <iostream>
using namespace std;

int main() {
    LSI lista;

    lista.inserareLaInceput(3);
    lista.inserareLaInceput(5);
    lista.inserareLaInceput(7);

    cout << "Lista dupa inserare: ";
    lista.afisare();

    lista.stergereLaInceput();

    cout << "Lista dupa stergere: ";
    lista.afisare();

    return 0;
}
