#ifndef LIGNE_H
#define LIGNE_H

#include "forme.h"

class Ligne : public Forme
{
private:
    int Xfinal,Yfinal;

public:
    Ligne(int _X1, int _Y1, int _X2, int _Y2, int _transparence, string _couleur);
    void display(CImage *img);
};

#endif // LIGNE_H
