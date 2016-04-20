#ifndef CARRE_H
#define CARRE_H

#include "rectangle.h"

class Carre : public Rectangle
{

public:
    Carre(int _X1, int _Y1, int _cote, int _transparence, string _couleur);
    void display(CImage *img);
};

#endif // CARRE_H
