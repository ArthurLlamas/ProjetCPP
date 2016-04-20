#ifndef POINT_H
#define POINT_H

#include "./Cercle.h"

class point : public Cercle
{
    public:
        point(int _X,int _Y, int transparence, string couleur);

        void display(CImage *img);

    protected:

    private:
};

#endif // POINT_H
