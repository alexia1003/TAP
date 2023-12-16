#include "Punct2D.cpp"
#include "Punct2D.h"
#include "Punct3D.cpp"
#include "Punct3D.h"

#include <iostream>
using namespace std;

int main() {
    int n, m;

    // citim n de la tastatură
    cout << "Introd. nr. de pct. 2D: ";
    cin >> n;

    // creare vector de Punct2D cu dimensiune n
    Punct2D* puncte2DArray = new Punct2D[n];

    // citim coordonatele pct. de la tastatură si le stocam in vector
    for (int i = 0; i < n; ++i) {
        double a, b;
        cout << "Introd. coordonatele pt. pct. 2D " << i + 1 << " (a b): ";
        cin >> a >> b;
        puncte2DArray[i] = Punct2D(a, b);
    }

    // afisare pct. 2D
    cout << "Pct. 2D sunt: ";
    for (int i = 0; i < n; ++i) {
        cout << puncte2DArray[i] << " ";
    }
    cout << endl;


    // citim m de la tastatură
    cout << "Introd. nr. de pct. 3D: ";
    cin >> m;

    // verif. m e nr. poz.
    if (m <= 0) {
        cout << "Eroare: nr. de pct. trebuie sa fie un nr. pozitiv." << endl;
        return 1;
    }

    // creare vector de Punct3D cu dimensiune m
    Punct3D* puncte3DArray = new Punct3D[m];

    // citim coordonatele pct. de la tastatură si le stocam in vector
    for (int i = 0; i < m; ++i) {
        double x, y, z;
        cout << "Introd. coordonatele pt. pct. 3D " << i + 1 << " (x y z): ";
        cin >> x >> y >> z;
        puncte3DArray[i] = Punct3D(x, y, z);
    }

    // afisare pct. 3D
    cout << "Pct. 3D sunt: ";
    for (int i = 0; i < m; ++i) {
        cout << puncte3DArray[i] << " ";
    }
    cout << endl;

    // eliberare mem. aloc. pr. vector
    delete[] puncte3DArray;

    return 0;
}
