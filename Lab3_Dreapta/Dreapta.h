#ifndef DREAPTA_H
#define DREAPTA_H

class Dreapta {
private:
    double m; // panta
    double n; // ordonata

public:
    // Constructor cu 2 parametrii si valori m=1 si n=0
    Dreapta(double m_val = 1, double n_val = 0);

    // Constructor de copiere
    Dreapta(const Dreapta &other);

    // Destructor
    ~Dreapta();

    // Metoda pentru afisarea ecuatiei dreptei
    void afiseazaEcuatie() const;
};

#endif // DREAPTA_H
