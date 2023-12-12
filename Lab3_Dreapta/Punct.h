#ifndef PUNCT_H
#define PUNCT_H
#include "Dreapta.h"
#include <vector>

class Punct {
private:
    static Dreapta dreaptaGlobala; 
    static int nrPunctePeDreapta;
    static int nrPuncteSemiplanPozitiv;
    static int nrPuncteSemiplanNegativ;

    double x; 
    double y; 

public:
    Punct(double x_val, double y_val);
    ~Punct();
    static Punct centruDeGreutate(const std::vector<Punct>& vectorPuncte);

    // metode publice pt campuri private
    static int getNrPunctePeDreapta();
    static int getNrPuncteSemiplanPozitiv();
    static int getNrPuncteSemiplanNegativ();
    double getX() const;
    double getY() const;
};

#endif // PUNCT_H
