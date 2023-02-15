#ifndef COR
#define COR

#include <iostream>
class Cor
{
public:
    short r, g, b;
    float cR, cG, cB;

    Cor() {}
    Cor(short pR, short pG, short pB)
    {
        r = pR;
        g = pG;
        b = pB;

        cR = float(pR) / 255.0;
        cG = float(pG) / 255.0;
        cB = float(pB) / 255.0;
    }
};

#endif