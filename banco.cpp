#include <GL/glut.h>
#include "cor.cpp"
#include "retangulo.cpp"

void montaBanco()
{

    Cor cinza = Cor(143, 143, 143);
    Retangulo apoio1 = Retangulo(Coordenada(500, 100, 200), cinza, 200, 200, 400);
    apoio1.desenhar(0, 0, 0, 0);

    Retangulo apoio2 = Retangulo(Coordenada(500, 900, 200), cinza, 200, 200, 400);
    apoio2.desenhar(0, 0, 0, 0);

    Cor preto = Cor(0, 0, 0);
    Retangulo banco = Retangulo(Coordenada(500, 500, 300), preto, 2000, 600, 100);
    banco.desenhar(0, 0, 0, 0);
}