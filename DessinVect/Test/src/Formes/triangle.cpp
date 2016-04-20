#include "triangle.h"

triangle::triangle(int _X1,int _Y1, int _X2, int _Y2, int _X3, int _Y3, int _transparence, string _couleur)
        : Ligne(_X1, _Y1, _transparence, _couleur)
{
    X2=_X2;
    X3=_X3;
    Y2=_Y2;
    Y3=_Y3;
}

void triangle::display(CImage *img)
{
    Ligne *l1= new Ligne(Forme::Xinitial,Forme::Yinitial,X2,Y2,Forme::transparence,Forme::couleur);
    Ligne *l2= new Ligne(Forme::Xinitial,Forme::Yinitial,X3,Y3,Forme::transparence,Forme::couleur);
    Ligne *l3= new Ligne(X3,Y3,X2,Y2,Forme::transparence,Forme::couleur);
    l1->display(img);
    l2->display(img);
    l3->display(img);
}
