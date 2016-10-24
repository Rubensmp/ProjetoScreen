#include <screen.h>
#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H


class FiguraGeometrica
{
public:
    FiguraGeometrica();
    virtual void pos(void)=0;
    virtual void draw(Screen &t)=0;
};

#endif // FIGURAGEOMETRICA_H
