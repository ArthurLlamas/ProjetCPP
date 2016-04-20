#include "ligne.h"
#include <math.h>

Ligne::Ligne(int _X1, int _Y1, int _X2, int _Y2, int _transparence, string _couleur)
    : Forme(_X1, _Y1, _transparence, _couleur)
{
Xfinal=_X2;
Yfinal=_Y2;
}
/*
Ligne::Ligne(int _X,int _Y,int _transparence,string _couleur)
    : Forme(_X, _Y, _transparence, _couleur)
{

}
*/

void Ligne::display(CImage *img)
{
    int w=0;
    if (Yfinal==Forme::Yinitial)
    {
        if (Forme::Xinitial<=Xfinal)
        {
            for(int i=Forme::Xinitial; i<=Xfinal; i++){
                CPixel *p = img->getPixel(i,Yfinal);
                p->RGB(0,255,0);
            }
        }
        else
        {
            for(int i=Forme::Xinitial; i<=Xfinal; i--){
                CPixel *p = img->getPixel(i,Yfinal);
                p->RGB(0,255,0);
            }
        }
    }
    else if(Xfinal==Forme::Xinitial)
    {
        if(Forme::Yinitial<=Yfinal)
        {
          for(int i=Forme::Yinitial; i<=Yfinal; i++){
                CPixel *p = img->getPixel(Xfinal,i);
                p->RGB(0,255,0);
            }
        }
        else
        {
            for(int i=Forme::Yinitial; i<=Yfinal; i--){
                CPixel *p = img->getPixel(Xfinal,i);
                p->RGB(0,255,0);
            }
        }
    }
    else if (Xfinal!=Forme::Xinitial)
    {
        double a;
        a=(((double)Yfinal-(double)Forme::Yinitial)/((double)Xfinal-(double)Forme::Xinitial));
        printf("a initial = %f",a);
        if(a>0)
        {
        if(Forme::Xinitial<Xfinal)
        {
            for(int i=Forme::Xinitial;i<=Xfinal;i++)
            {
                CPixel *p = img -> getPixel(i,(int)(a*w+Forme::Yinitial));
                p->RGB(0,255,0);
                w++;
            }
        }
        else
        {
            for(int i=Xfinal;i<=Forme::Xinitial;i++)
            {
                CPixel *p = img -> getPixel(i,(int)(a*w+Yfinal));
                p->RGB(0,255,0);
                w++;
            }
        }
        }
        else
        {
        if(Forme::Xinitial<Xfinal)
        {
            for(int i=Xfinal;i>=Forme::Xinitial;i--)
            {
                CPixel *p = img -> getPixel(i,(int)(-a*w+Yfinal));
                p->RGB(0,255,0);
                w++;
            }
        }
        else
        {
            for(int i=Forme::Xinitial;i>=Xfinal;i--)
            {
                CPixel *p = img -> getPixel(i,(int)(-a*w+Forme::Yinitial));
                p->RGB(0,255,0);
                w++;
            }
        }
        }
    }
}
