#include "cercleS.h"
#include <math.h>

cercleS::cercleS(int _X,int _Y,int _rayon, int transparence, string couleur)
        : Cercle( _X, _Y, _rayon, transparence, couleur)
{

}

void cercleS::display(CImage *img)
{
    int x,y;
    for(x=0;x<200;x++)
    {
        for(y=0;y<200;y++)
        {
            if(((pow(x-Forme::Xinitial,2)+pow(y-Forme::Yinitial,2))-pow(Cercle::rayon,2))<1)//Equation du cercle (<1 pour avoir tout l'intérieur du cercle)
            {
                CPixel *p = img->getPixel(x,y);
                p->RGB(255,0,0);
            }
        }
    }
}
