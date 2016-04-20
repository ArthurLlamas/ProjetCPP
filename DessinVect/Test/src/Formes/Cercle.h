#ifndef CERCLE_H
#define CERCLE_H

#include "forme.h"

class Cercle : public Forme
{
    public:
        Cercle(int _X,int _Y,int _rayon, int transparence, string couleur);

        int rayon;

        void display(CImage *img);
        void ladder();

    protected:

    private:
};

#endif // CERCLE_H
