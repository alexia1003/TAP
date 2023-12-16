#ifndef ANGAJAT_H
#define ANGAJAT_H

class Angajat {
private:
    double tarifOrar;
    int nrOre;

public:
    Angajat();  
    Angajat(int nrOre);  
    Angajat(double tarifOrar, int nrOre); 
    Angajat(const Angajat& angajat); 
    ~Angajat(); 

    // met. calculul salariului
    double getSalar() const;  
    // met. pt. aflare valoare tarifOrar
    double getTarifOrar() const;  

    // supraincarcare op. >>
    static Angajat citireAngajat(); 
    // supraincarcare op. <<
    void afisAngajat() const;  

};

#endif // ANGAJAT_H
