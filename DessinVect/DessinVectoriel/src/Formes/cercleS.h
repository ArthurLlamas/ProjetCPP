#ifndef CERCLES_H
#define CERCLES_H

#include "./Cercle.h"


class cercleS : public Cercle
{
    public:
        cercleS(int _X,int _Y,int _rayon, int transparence, string couleur);

        void display(CImage *img);

    protected:

    private:
};

#endif // CERCLES_H
