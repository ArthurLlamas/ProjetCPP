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
    int echelle=2;

    Forme(int _X,int _Y, int _transparence, string _couleur);
    ~Forme();
    void color();
    void ladder();
    int transp(int _RGB);

};

#endif // FORME_H
