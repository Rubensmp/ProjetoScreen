#include <figurageometrica.h>
#ifndef RETA_H
#define RETA_H

using namespace std;

class Reta : public FiguraGeometrica{
private:
    int x0, y0, x1, y1;
public:
    Reta(int x0, int y0, int x1, int y1);
    void pos(void);
    void draw(Screen &t);
};

#endif // RETA_H
