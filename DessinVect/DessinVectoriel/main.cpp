#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

#include "./Format/CBitmap.h"
#include "./Formes/ligne.h"
#include "./src/Formes/Cercle.h"
#include "./src/Formes/cercleS.h"
#include "./src/Formes/point.h"


int main(int argc, char * argv[]) {
    cout << "(II) P_Bitmap exection start (" << __DATE__ << " - " << __TIME__ << ")" << endl;
    cout << "(II) + Number of arguments = " << argc << endl;

    cout << "(II) CBitmap object creation" << endl;
    CBitmap *image = new CBitmap();
    string filename2 = "Sortie.bmp";

    cout << "(II) CImage pointer extraction" << endl;
    CImage   *img = new CImage(200, 200);

    Ligne *l=new Ligne(0,0,100,100,10,"vert");
    l->display(img);

 //   Cercle *c = new Cercle(100,100,50,10,"vert");
 //   c->display(img);

   // cercleS *c2= new cercleS(35,120,25,10,"rouge");
  //  c2->display(img);
/*
    point *p1 = new point(35,120,10,"bleu");
    p1->display(img);

    point *p2 = new point(100,100,10,"bleu");
    p2->display(img);
*/
    image->setImage( img );
    cout << "(II) CBitmap image saving" << endl;
    image->SaveBMP(filename2);

    return 1;
}

