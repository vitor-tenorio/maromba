#ifndef COORDENADA
#define COORDENADA

#include "utils.cpp"

class Coordenada
{
public:
    int x, y, z;      // Unidade de medida de tela
    float cX, cY, cZ; // Unidade convertida para o formato do openGl

    Coordenada() {}

    Coordenada(int pX, int pY, int pZ)
    {
        x = pX;
        y = pY;
        z = pZ;
        cX = float(2 * x - LARGURA) / float(LARGURA);
        cY = float(2 * y - ALTURA) / float(LARGURA);
        cZ = float(2 * z - PROFUNDIDADE) / float(PROFUNDIDADE);
    }
};

#endif
