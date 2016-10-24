#include <figurageometrica.h>
#ifndef RETANGULO_H
#define RETANGULO_H

using namespace std;
class Retangulo : public FiguraGeometrica{
private:
    int x0, y0, largura, altura;
public:
    Retangulo(int x0, int y0,int largura, int altura);
    void pos(void);
    void draw(Screen &t);
};

#endif // RETANGULO_H
