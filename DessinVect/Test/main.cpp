#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

#include "./src/Format/CBitmap.h"
#include "./src/Formes/ligne.h"
#include "./src/Formes/Cercle.h"
#include "./src/Formes/cercleS.h"
#include "./src/Formes/point.h"
#include "./src/Formes/triangle.h"
#include "./src/Formes/rectangle.h"
#include "./src/Formes/carre.h"
#include "./src/Formes/rectangles.h"
#include "./src/Formes/carres.h"

int taillex=200;
int tailley=200;
int echelle=2;

void ladderimg()
{
    taillex=taillex+taillex*(echelle-1)/echelle;
    tailley=tailley+tailley*(echelle-1)/echelle;
}

int main(int argc, char * argv[]) {
    ladderimg();
    cout << "(II) P_Bitmap exection start (" << __DATE__ << " - " << __TIME__ << ")" << endl;
    cout << "(II) + Number of arguments = " << argc << endl;

    cout << "(II) CBitmap object creation" << endl;
    CBitmap *image = new CBitmap();
    string filename2 = "Sortie.bmp";

    cout << "(II) CImage pointer extraction" << endl;
    CImage   *img = new CImage(taillex, tailley);
/*
    Ligne *l=new Ligne(50,75,50,125,10,"vert");
    l->display(img);
    */

    Cercle *c = new Cercle(50,50,50,10,"vert");
   c->display(img);

    cercleS *c2= new cercleS(150,50,50,10,"rouge");
    c2->display(img);

/*
    point *p1 = new point(35,120,10,"bleu");
    p1->display(img);

    point *p2 = new point(100,100,10,"bleu");
    p2->display(img);
    */
/*
    triangle *t = new triangle(100,100,125,125,150,100,10,"rouge");
    t->display(img);
*/

/*
    Rectangle *r = new Rectangle(100,100,25,30,10,"vert");
    r->display(img);
*/
/*
    Carre *ca = new Carre(50,50,25,10,"rouge");
    ca -> display(img);
*/
    image->setImage( img );
    cout << "(II) CBitmap image saving" << endl;
    image->SaveBMP(filename2);

    return 1;
}

