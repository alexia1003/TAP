#ifndef MANAGER_H
#define MANAGER_H

//#pragma once

#include "Angajat.h"

class Manager : public Angajat {
private:
    int nrSubordonati;

public:
    Manager();  
    Manager(double tarifOrar, int nrOre, int numarSubordonati); 
    Manager(const Manager& manager); 
    ~Manager(); 
    
    // getter pt nrSubordonati
    int getNrSubordonati() const; 

    // supraincarcare met. pt calcul salar
    double getSalar() const;  

};

#endif // MANAGER_H
