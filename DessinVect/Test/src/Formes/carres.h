#ifndef CARRES_H
#define CARRES_H

#include "rectangles.h"

class CarreS : public RectangleS
{
public:
    CarreS(int _X, int _Y, int _cote, int _transparence, string _couleur);
    void display(CImage *img);
};

#endif // CARRES_H
