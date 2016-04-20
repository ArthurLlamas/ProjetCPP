#include "Cercle.h"
#include <math.h>

Cercle::Cercle(int _X,int _Y,int _rayon, int transparence, string couleur)
    : Forme(_X, _Y, transparence, couleur)
{
    rayon=_rayon;
    ladder();
}

void Cercle::ladder()
{
    rayon=rayon*(Forme::echelle);
    if(Forme::Xinitial-rayon<0)
    {
        Forme::Xinitial=Forme::Xinitial+rayon-Forme::Xinitial;
    }
    if(Forme::Yinitial-rayon<0)
    {
        Forme::Yinitial=Forme::Yinitial+rayon-Forme::Yinitial;
    }
    //Modifier aussi le centre du cercle ici
}


void Cercle::display(CImage *img)
{
    int x,y;
    for(x=0;x<200;x++)
    {
        for(y=0;y<200;y++)
        {
            if(((pow(x-Forme::Xinitial,2)+pow(y-Forme::Yinitial,2))-pow(rayon,2))<1)//Equation du cercle (<1 pour avoir tout l'intérieur du cercle)
            {
                if(rayon-sqrt(pow(x-Forme::Xinitial,2)+pow(y-Forme::Yinitial,2))<1)//On compare la distance entre le rayon du cercle et la distance du point avce le centre, si inférieur à 1 (taille pixel) on colore ces pixels
                {
                CPixel *p = img->getPixel(x,y);
                p->RGB(0,255,0);
                }
            }
        }
    }
}
