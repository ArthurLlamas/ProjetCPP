#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "ligne.h"

class triangle : public Ligne
{
    public:
        triangle(int _X1,int _Y1, int _X2, int _Y2, int _X3, int _Y3, int _transparence, string _couleur);
        int X1, X2, X3, Y1, Y2, Y3;
        void display(CImage *img);
    protected:

    private:
};

#endif // TRIANGLE_H
