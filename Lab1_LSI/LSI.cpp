#include "LSI.h"
#include <iostream>

using namespace std;

Nod::Nod(int val) : data(val), next(nullptr) {}

LSI::LSI() : primul(nullptr) {}

void LSI::inserareLaInceput(int val) {
    Nod* nouNod = new Nod(val);
    nouNod->next = primul;
    primul = nouNod;
}

void LSI::stergereLaInceput() {
    if (primul) {
        Nod* nodSters = primul;
        primul = primul->next;
        delete nodSters;
    }
}

void LSI::afisare() const {
    Nod* nodCurent = primul;
    while (nodCurent) {
        cout << nodCurent->data << " ";
        nodCurent = nodCurent->next;
    }
    cout << endl;
}
