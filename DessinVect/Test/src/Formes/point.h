#ifndef POINT_H
#define POINT_H

#include "./cercleS.h"

class point : public cercleS
{
    public:
        point(int _X,int _Y, int transparence, string couleur);

        void display(CImage *img);
        void ladder();

    protected:

    private:
};

#endif // POINT_H
