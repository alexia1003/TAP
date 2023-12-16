#include "Angajat.h"
#include "Manager.h"
#include <iostream>

using namespace std;

int main() {

    // instnatiere obiect cls. Angajat
    Angajat angajat(10.0, 35); 

    // instnatiere obiect cls. Manager
    Manager manager(15.0, 40, 5);

    // afis. tarifului orar si salariu angajat
    cout << "Tarif orar al angajatului: " << angajat.getTarifOrar() << endl;
    cout << "Salariul angajatului: " << angajat.getSalar() << endl;

    // afis. tarifului orar si salariu angajat
    cout << "Tarif orar al managerului: " << manager.getTarifOrar() << endl;
    cout << "Salariul managerului: " << manager.getSalar() << endl;
    cout << "Numar subordonati: " << manager.getNrSubordonati() << endl;



    return 0;
}
