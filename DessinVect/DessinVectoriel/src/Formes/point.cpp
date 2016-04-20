#include "point.h"

point::point(int _X,int _Y, int transparence, string couleur)
        : Cercle( _X, _Y, 0, transparence, couleur)
{

}


void point::display(CImage *img)
{
    Cercle::display(img);
}
