#include "carre.h"

Carre::Carre(int _X, int _Y, int _cote, int _transparence, string _couleur)
    : Rectangle( _X, _Y, _cote, _transparence, _couleur)
{
}


void Carre::display(CImage *img)
{
    Rectangle::display(img);
}

