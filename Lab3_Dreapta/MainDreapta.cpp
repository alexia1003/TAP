#include "Dreapta.h"

int main() {
    // instanta cls. Dreapta - constructorul implicit
    Dreapta dreaptaImplicita;
    dreaptaImplicita.afiseazaEcuatie();

    //  instanta cls. Dreapta - constructorul cu valori date
    Dreapta dreaptaCuValori(2, 3);
    dreaptaCuValori.afiseazaEcuatie();

    // instanta cls. Dreapta - constructorul de copiere
    Dreapta dreaptaCopiata(dreaptaCuValori);
    dreaptaCopiata.afiseazaEcuatie();

    return 0;
}
