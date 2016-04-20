#ifndef FORME_H
#define FORME_H

#include <string>
#include "../Format/CBitmap.h"
using namespace std;

class Forme
{
public:
    int Xinitial,Yinitial;
    int transparence;
    string couleur;
    int z;


    Forme(int _X,int _Y, int _transparence, string _couleur);
    ~Forme();
    void echelle();

};

#endif // FORME_H
