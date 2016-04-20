#include "carres.h"

CarreS::CarreS(int _X, int _Y, int _cote, int _transparence, string _couleur)
    : RectangleS(_X, _Y, _cote, _transparence, _couleur)
{
}


void CarreS::display(CImage *img)
{
    RectangleS::display(img);
}
