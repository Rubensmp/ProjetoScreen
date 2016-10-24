#include "circulo.h"
#include <cmath>


Circulo::Circulo(int x0, int y0, int raio, int fillmode){
    this->x0=x0;
    this->y0=y0;
    this ->raio=raio;
    this->fillmode=fillmode;
}

void Circulo::draw(Screen &t){
    for(int i=x0-raio;i<=(x0+raio);i++){
        for(int j=y0-raio;j<=(y0+raio);j++){
            float aux = (pow((i-x0),2) + pow((j-y0),2));
            aux = (pow(aux,0.5));
            if(fillmode==0){
                if((int)aux==raio){
                    t.setPixel(i,j);
                }
            } else {
                if((int)aux<=raio){
                    t.setPixel(i,j);
                }
            }
        }
    }

}

void Circulo::pos(){
    cout << "Centro: (" << x0 << "," << y0 << ")" << endl;
    cout << "Raio: " << raio << endl;
    if(fillmode==0){
        cout << "Apenas contorno do círculo."<< endl;
    } else {
        cout << "Circulo preenchido."<< endl;
    }
}
