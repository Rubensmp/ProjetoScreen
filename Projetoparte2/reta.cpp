#include "reta.h"
#define sgn(x) ((x<0)?-1:((x>0)?1:0))


Reta::Reta(int x0, int y0, int x1, int y1){
    this->x0=x0;
    this->y0=y0;
    this->x1=x1;
    this->y1=y1;
}

void Reta::draw(Screen &t){

    int dx, dy, x, y;
    float incli;

    dx = x1-x0;
    dy = y1-y0;

    if (abs(dx) >= abs(dy)){
        incli = (float)dy/(float)dx;
        for(int i=0; i != dx; i=i+sgn(dx)){
            x = x0 + i;
            y = incli *i + y0;
            t.setPixel(x,y);
        }
    }
    else {
        incli = (float)dx/(float)dy;
        for (int i=0; i!=dy; i= i+sgn(dy)){
            x = incli *i + x0;
            y = y0 + i;
            t.setPixel(x,y);
        }
    }
}

void Reta::pos(){
    cout << "Ponto inicial: (" << x0 << "," << y0 << ")" << endl;
    cout << "Ponto final: (" << x1 << "," << y1 << ")" << endl;
}
