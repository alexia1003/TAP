#ifndef LSI_H
#define LSI_H

class LSI;  

class Nod {
private:
    int data;
    Nod* next;

public:
    Nod(int val);
    friend class LSI;
};

class LSI {
private:
    Nod* primul;

public:
    LSI();
    void inserareLaInceput(int val);
    void stergereLaInceput();
    void afisare() const;
};

#endif //LSI_H
