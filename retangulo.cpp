#ifndef RETANGULO
#define RETANGULO

#include "coordenada.cpp"
#include "cor.cpp"
#include <GL/glut.h>
class Retangulo
{
public:
    Coordenada centro;
    Cor cor;
    int altura, largura, profundidade;
    float cAltura, cLargura, cProfundidade;

    Retangulo() {}

    Retangulo(Coordenada pCentro, Cor pCor, int pAltura, int pLargura, int pProfundidade)
    {
        centro = pCentro;
        cor = pCor;
        altura = pAltura;
        largura = pLargura;
        profundidade = pProfundidade;
        cAltura = converteUnidadeDeMedida(altura) / 2;
        cLargura = converteUnidadeDeMedida(largura) / 2;
        cProfundidade = converteUnidadeDeMedida(profundidade) / 2;
    }

    void desenhar(float angulo, bool anguloX, bool anguloY, bool anguloZ)
    {
        glPushMatrix();
        glTranslatef(centro.cX, centro.cY, centro.cZ);
        glRotatef(angulo, anguloX, anguloY, anguloZ);
        glColor3f(cor.cR, cor.cG, cor.cB);
        glBegin(GL_QUADS);
            // Face traseira
            glVertex3f(-cLargura, -cAltura, -cProfundidade);
            glVertex3f(cLargura, -cAltura, -cProfundidade);
            glVertex3f(cLargura, cAltura, -cProfundidade);
            glVertex3f(-cLargura, cAltura, -cProfundidade);
            // Face frontal
            glVertex3f(-cLargura, -cAltura, cProfundidade);
            glVertex3f(cLargura, -cAltura, cProfundidade);
            glVertex3f(cLargura, cAltura, cProfundidade);
            glVertex3f(-cLargura, cAltura, cProfundidade);
            // Face superior
            glVertex3f(-cLargura, cAltura, -cProfundidade);
            glVertex3f(cLargura, cAltura, -cProfundidade);
            glVertex3f(cLargura, cAltura, cProfundidade);
            glVertex3f(-cLargura, cAltura, cProfundidade);
            // Face inferior
            glVertex3f(-cLargura, -cAltura, -cProfundidade);
            glVertex3f(cLargura, -cAltura, -cProfundidade);
            glVertex3f(cLargura, -cAltura, cProfundidade);
            glVertex3f(-cLargura, -cAltura, cProfundidade);
            // Face esquerda
            glVertex3f(-cLargura, -cAltura, -cProfundidade);
            glVertex3f(-cLargura, cAltura, -cProfundidade);
            glVertex3f(-cLargura, cAltura, cProfundidade);
            glVertex3f(-cLargura, -cAltura, cProfundidade);
            // Face direita
            glVertex3f(cLargura, -cAltura, -cProfundidade);
            glVertex3f(cLargura, cAltura, -cProfundidade);
            glVertex3f(cLargura, cAltura, cProfundidade);
            glVertex3f(cLargura, -cAltura, cProfundidade);
        glEnd();
        glPopMatrix();
    }
};

#endif