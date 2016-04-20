#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "ligne.h"

class Rectangle : public Ligne
{
private:
    //int longueur,hauteur;

public:
    Rectangle(int _X, int _Y, int _longueur, int _hauteur, int _transparence, string _couleur);
    Rectangle(int _X, int _Y, int _cote, int _transparence, string _couleur);
    void display(CImage *img);

    int longueur,hauteur;
};

#endif // RECTANGLE_H

