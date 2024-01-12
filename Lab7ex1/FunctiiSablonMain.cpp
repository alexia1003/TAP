#include "FunctiiSablon.h"

using namespace std;

int main() {
    vector<int> vectorInt = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int maxInt, minInt;
    gasesteMinMax(vectorInt, maxInt, minInt);

    cout << "Maximul: " << maxInt << "\n";
    cout << "Minimul: " << minInt << "\n";

    int cheie = 6;
    cout << "Cautare secventiala pentru " << cheie << ": " << (cautareSecventiala(vectorInt, cheie) ? "gasit" : "negasit") << "\n";
    sort(vectorInt.begin(), vectorInt.end()); 
    // vector sortat pt. cautarea binara
    cout << "Cautare binara pentru " << cheie << ": " << (cautareBinara(vectorInt, cheie) ? "gasit" : "negasit") << "\n";

    vector<string> vectorStr = {"banana", "mar", "portocala", "struguri", "kiwi"};
    sortareBule(vectorStr);

    cout << "Sortare inversa alfabetica:\n";
    for (const auto& str : vectorStr) {
        cout << str << " ";
    }

    return 0;
}
