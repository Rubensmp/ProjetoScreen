#include "retangulo.h"
#include "reta.h"

Retangulo::Retangulo(int x0, int y0, int largura, int altura){
    this->x0 = x0;
    this->y0 = y0;
    this->largura = largura;
    this->altura = altura;
}

void Retangulo::draw(Screen &t){
    Reta a1 (x0,y0,x0+largura,y0);
    Reta a2 (x0+largura,y0,x0+largura,y0+altura);
    Reta a3(x0+largura,y0+altura,x0,y0+altura);
    Reta a4 (x0,y0+altura,x0,y0);

    a1.draw(t);
    a2.draw(t);
    a3.draw(t);
    a4.draw(t);
}

void Retangulo::pos(){
    cout << "Ponto inicial: (" << x0 << "," << y0 << ")" << endl;
    cout << "Largura: " << largura << endl;
    cout << "Altura: " << altura << endl;
}
