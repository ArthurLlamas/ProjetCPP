#include "point.h"

point::point(int _X,int _Y, int transparence, string couleur)
        : cercleS( _X, _Y, 0, transparence, couleur)
{
    ladder();
}

void point::ladder()
{
    Cercle::rayon=Cercle::rayon+(Forme::echelle-1);
    if(Forme::Xinitial-Cercle::rayon<0)
    {
        Forme::Xinitial=Forme::Xinitial+Cercle::rayon-Forme::Xinitial;
    }
    if(Forme::Yinitial-Cercle::rayon<0)
    {
        Forme::Yinitial=Forme::Yinitial+Cercle::rayon-Forme::Yinitial;
    }
}
void point::display(CImage *img)
{
    cercleS::display(img);
}
