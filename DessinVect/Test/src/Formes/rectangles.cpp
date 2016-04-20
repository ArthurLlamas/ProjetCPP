#include "rectangles.h"

RectangleS::RectangleS(int _X, int _Y, int _longueur, int _hauteur, int _transparence, string _couleur)
: Rectangle(_X, _Y, _longueur, _hauteur, _transparence, _couleur)
{
}

RectangleS::RectangleS(int _X, int _Y, int _cote, int _transparence, string _couleur)
: Rectangle(_X, _Y, _cote, _transparence, _couleur)
{
}

void RectangleS::display(CImage *img)
{
    int Xfinal,Yfinal,j;
    //Fixer les valeurs des sommets du rectangle
    Xfinal=Forme::Xinitial+Rectangle::longueur;
    Yfinal=Forme::Xinitial+Rectangle::hauteur;

        for(j=Forme::Yinitial;j<=Yfinal;j++)
        {
            Ligne *l= new Ligne(Forme::Xinitial,j,Xfinal,j,Forme::transparence,Forme::couleur);
            l->display(img);
        }
}

