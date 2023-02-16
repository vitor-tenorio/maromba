#include <GL/glut.h>
#include "cor.cpp"
#include "retangulo.cpp"
#include "cilindro.cpp"

void montaBarra(bool flexaoFeita, int plateIndex)
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
    int altura = 167;
    if (flexaoFeita)
        altura = 525;
    Cilindro barra = Cilindro(Coordenada(altura, 380, -250), prata, 100, 100, 3000);
    barra.desenhar(90, 0, 1, 0);

    Cor vermelho = Cor(255, 0, 0);
    Cor azul = Cor(0, 0, 255);
    Cor cor;
    int alturaAnilha;

    Cilindro anilha1 = Cilindro(Coordenada(altura, 380, 0), vermelho, 750, 750, 75);    
    glPushMatrix();
    for (int i = 0; i < plateIndex; i++) {
        anilha1.desenhar(90, 0, 1, 0);        
        glTranslatef(-0.15, 0, 0);
    }
    glPopMatrix();

    Cilindro anilha2 = Cilindro(Coordenada(altura, 380, 1000), vermelho, 750, 750, 75);
    glPushMatrix();
    for (int i = 0; i < plateIndex; i++) {
        anilha2.desenhar(90, 0, 1, 0);        
        glTranslatef(0.15, 0, 0);
    }
    glPopMatrix();

}