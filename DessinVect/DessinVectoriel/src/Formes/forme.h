#ifndef FORME_H
#define FORME_H

#include <string>
#include "../Format/CBitmap.h"

using namespace std;

class Forme
{
private:
    //int Xinitial,Yinitial;
    //int transparence;
    //string couleur;
    //int z;

public:
    int Xinitial,Yinitial;
    int transparence;
    string couleur;
    int z;
    int r,g,b;

    Forme(int _X,int _Y, int _transparence, string _couleur);
    ~Forme();
    //void color();
    //void echelle();
    //int transp(int _RGB);

};

#endif // FORME_H
