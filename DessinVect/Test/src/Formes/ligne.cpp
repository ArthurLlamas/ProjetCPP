#include "ligne.h"
#include <math.h>

Ligne::Ligne(int _X1, int _Y1, int _X2, int _Y2, int _transparence, string _couleur)
    : Forme(_X1, _Y1, _transparence, _couleur)
{
Xfinal=_X2;
Yfinal=_Y2;
//ladder();
}

Ligne::Ligne(int _X,int _Y,int _transparence,string _couleur)
    : Forme(_X, _Y, _transparence, _couleur)
{

}

void Ligne::ladder()
{
    //On agrandi de chaque cote la ligne
    if(Forme::Yinitial==Yfinal)
    {
        if(Forme::Xinitial<=Xfinal)
        {
            int Xini=Forme::Xinitial;
            Forme::Xinitial=Forme::Xinitial-((Xfinal-Forme::Xinitial)*(Forme::echelle-1))/2;
            //Forme::Yinitial=Forme::Yinitial-Forme::Yinitial*(int)(Forme::echelle-1)/2;
            Xfinal=Xfinal+((Xfinal-Xini)*(Forme::echelle-1))/2;
            //Yfinal=(Yfinal+Yfinal*(int)(Forme::echelle-1)/2);
            //printf("Xinitial = %d ",Forme::Xinitial);
            //printf("Xfinal = %d ",Xfinal);
            if(Forme::Xinitial<0)
            {
               Xfinal=Xfinal-Forme::Xinitial;
               Forme::Xinitial=0;
            }
            //printf("Xfinal = %d ",Xfinal);
        }
        else
        {
            int Xfi=Xfinal;
            Xfinal=Xfinal-((Forme::Xinitial-Xfinal)*(Forme::echelle-1))/2;
            Forme::Xinitial=Forme::Xinitial+((Forme::Xinitial-Xfi)*(Forme::echelle-1))/2;
            if(Xfinal<0)
            {
                Forme::Xinitial=Forme::Xinitial-Xfinal;
                Xfinal=0;
            }
        }
    }
    else if(Forme::Xinitial==Xfinal)
    {
        if(Forme::Yinitial<=Yfinal)
        {
            int Yini=Forme::Yinitial;
            Forme::Yinitial=Forme::Yinitial-((Yfinal-Forme::Yinitial)*(Forme::echelle-1))/2;
            //Forme::Yinitial=Forme::Yinitial-Forme::Yinitial*(int)(Forme::echelle-1)/2;
            Yfinal=Yfinal+((Yfinal-Yini)*(Forme::echelle-1))/2;
            //Yfinal=(Yfinal+Yfinal*(int)(Forme::echelle-1)/2);
            //printf("Yinitial = %d ",Forme::Yinitial);
            //printf("Yfinal = %d ",Yfinal);
            if(Forme::Yinitial<0)
            {
               Yfinal=Yfinal-Forme::Yinitial;
               Forme::Yinitial=0;
            }
            //printf("Xfinal = %d ",Xfinal);
        }
        else
        {
            int Yfi=Yfinal;
            Yfinal=Yfinal-((Forme::Yinitial-Yfinal)*(Forme::echelle-1))/2;
            Forme::Yinitial=Forme::Yinitial+((Forme::Yinitial-Yfi)*(Forme::echelle-1))/2;
            if(Yfinal<0)
            {
                Forme::Yinitial=Forme::Yinitial-Yfinal;
                Yfinal=0;
            }
        }
    }
    //Faire les 4 cas pour les lignes penchés !!
}


void Ligne::display(CImage *img)
{
    //ladder();
    int w=0;
    if (Yfinal==Forme::Yinitial)
    {
        if (Forme::Xinitial<=Xfinal)
        {
            for(int i=Forme::Xinitial; i<=Xfinal; i++){
                CPixel *p = img->getPixel(i,Yfinal);
                p->RGB(Forme::r,Forme::g,Forme::b);
            }
        }
        else
        {
            for(int i=Forme::Xinitial; i>=Xfinal; i--){
                CPixel *p = img->getPixel(i,Yfinal);
                p->RGB(Forme::r,Forme::g,Forme::b);
            }
        }
    }
    else if(Xfinal==Forme::Xinitial)
    {
        if(Forme::Yinitial<=Yfinal)
        {
          for(int i=Forme::Yinitial; i<=Yfinal; i++){
                CPixel *p = img->getPixel(Xfinal,i);
                p->RGB(Forme::r,Forme::g,Forme::b);
            }
        }
        else
        {
            for(int i=Forme::Yinitial; i>=Yfinal; i--){
                CPixel *p = img->getPixel(Xfinal,i);
                p->RGB(Forme::r,Forme::g,Forme::b);
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
                p->RGB(Forme::r,Forme::g,Forme::b);
                w++;
            }
        }
        else
        {
            for(int i=Xfinal;i<=Forme::Xinitial;i++)
            {
                CPixel *p = img -> getPixel(i,(int)(a*w+Yfinal));
                p->RGB(Forme::r,Forme::g,Forme::b);
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
                p->RGB(Forme::r,Forme::g,Forme::b);
                w++;
            }
        }
        else
        {
            for(int i=Forme::Xinitial;i>=Xfinal;i--)
            {
                CPixel *p = img -> getPixel(i,(int)(-a*w+Forme::Yinitial));
                p->RGB(Forme::r,Forme::g,Forme::b);
                w++;
            }
        }
        }
    }
}
