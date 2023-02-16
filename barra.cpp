#include <GL/glut.h>
#include "cor.cpp"
#include "retangulo.cpp"
#include "cilindro.cpp"

void montaBarra()
{
    Cor preto = Cor(0, 0, 0);
    Cilindro apoio1 = Cilindro(Coordenada(800, 200, 100), preto, 200, 200, 1600);
    apoio1.desenhar(0, 0, 0, 0);

    Cilindro apoio2 = Cilindro(Coordenada(200, 200, 100), preto, 200, 200, 1600);
    apoio2.desenhar(0, 0, 0, 0);

    Retangulo baseBarra1 = Retangulo(Coordenada(200, 260, 800), preto, 300, 40, 40);
    baseBarra1.desenhar(20, 1, 0, 0);

    Retangulo baseBarra2 = Retangulo(Coordenada(800, 260, 800), preto, 300, 40, 40);
    baseBarra2.desenhar(20, 1, 0, 0);

    Cor prata = Cor(128, 128, 128);
    Cilindro barra = Cilindro(Coordenada(160, 380, 0), prata, 100, 100, 2000);
    barra.desenhar(90, 0, 1, 0);
}