#include "rectangle.h"

// Constructeur pour le rectangle
Rectangle::Rectangle(int _X, int _Y, int _longueur, int _hauteur, int _transparence, string _couleur)
    : Ligne(_X, _Y, _transparence, _couleur)
{
    longueur=_longueur;
    hauteur=_hauteur;
    ladder();

}

//Constructeur pour le carré
Rectangle::Rectangle(int _X, int _Y, int _cote, int _transparence, string _couleur)
    : Ligne(_X, _Y, _transparence, _couleur)
{
    longueur=_cote;
    hauteur=_cote;
    ladder();
}

void Rectangle::ladder()
{
    longueur=longueur*Forme::echelle;
    hauteur=hauteur*Forme::echelle;
}

void Rectangle::display(CImage *img)
{
    int Xfinal,Yfinal;

    //Tracé de la ligne du bas
    Xfinal=Forme::Xinitial;
    Yfinal=Forme::Yinitial+hauteur;
    printf("Yfinal = %d",Yfinal);

    Ligne *l1= new Ligne(Forme::Xinitial,Forme::Yinitial,Xfinal,Yfinal,Forme::transparence,Forme::couleur);
    l1->display(img);
    //Tracé de la ligne de gauche
    Xfinal=Forme::Xinitial+longueur;
    Yfinal=Forme::Yinitial;

    printf("Xfinal = %d",Xfinal);

    Ligne *l2= new Ligne(Forme::Xinitial,Forme::Yinitial,Xfinal,Yfinal,Forme::transparence,Forme::couleur);
    l2->display(img);

    //Tracé de la ligne du haut en changeant l'origine du repère
    Forme::Xinitial= Forme::Xinitial +longueur;
    Forme::Yinitial= Forme::Yinitial + hauteur;
    Xfinal=Forme::Xinitial;
    Yfinal=Forme::Yinitial-hauteur;

    Ligne *l3= new Ligne(Forme::Xinitial,Forme::Yinitial,Xfinal,Yfinal,Forme::transparence,Forme::couleur);
    l3->display(img);

    //Tracé de la ligne de droite
    Xfinal=Forme::Xinitial-longueur;
    Yfinal=Forme::Yinitial;

    Ligne *l4= new Ligne(Forme::Xinitial,Forme::Yinitial,Xfinal,Yfinal,Forme::transparence,Forme::couleur);
    l4->display(img);
}

