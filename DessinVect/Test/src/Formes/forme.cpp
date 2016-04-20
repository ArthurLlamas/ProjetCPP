#include "forme.h"

Forme::Forme(int _X,int _Y,int _transparence, string _couleur)
{
    Xinitial=_X;
    Yinitial=_Y;
    transparence=_transparence;
    couleur=_couleur;
    color();
 }

void Forme::ladder()
{

}


void Forme::color()
{
    if(couleur=="rouge")
    {
        r=255;
        g=0;
        b=0;
    }
    else if(couleur=="vert")
    {
        r=0;
        g=255;
        b=0;
    }
    else if(couleur=="bleu")
    {
        r=0;
        g=0;
        b=255;
    }
    else
    {
        r=0;
        g=0;
        b=0;
    }
}


int Forme::transp(int _RGB)
{
    int RGB=((100-transparence)*_RGB+transparence*_RGB)/100;
    return RGB;
}

