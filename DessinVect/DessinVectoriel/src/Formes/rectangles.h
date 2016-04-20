#ifndef RECTANGLES_H
#define RECTANGLES_H

#include "rectangle.h"

class RectangleS : public Rectangle
{
public:
    RectangleS(int _X, int _Y, int _longueur, int _hauteur, int _transparence, string _couleur);
    RectangleS(int _X, int _Y, int _cote, int _transparence, string _couleur);

   void display(CImage *img);
};

#endif // RECTANGLES_H
