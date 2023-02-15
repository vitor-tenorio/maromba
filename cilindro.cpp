#ifndef CILINDRO
#define CILINDRO

#include "coordenada.cpp"
#include "cor.cpp"
#include <iostream>
#include <GL/glut.h>

using namespace std;

class Cilindro
{
public:
    Coordenada centro;
    Cor cor;
    int base, topo, altura;
    float cBase, cTopo, cAltura;

    Cilindro(Coordenada pCentro, Cor pCor, int pBase, int pTopo, int pAltura)
    {
        centro = pCentro;
        cor = pCor;
        base = pBase;
        topo = pTopo;
        altura = pAltura;
        cBase = converteUnidadeDeMedida(base) / 2;
        cTopo = converteUnidadeDeMedida(topo) / 2;
        cAltura = converteUnidadeDeMedida(altura);
    }

    void desenhar(float angulo, bool anguloX, bool anguloY, bool anguloZ)
    {
        glPushMatrix();
        glRotatef(angulo, anguloX, anguloY, anguloZ);
        glTranslatef(centro.cX, centro.cY, centro.cZ);
        glColor3f(cor.cR, cor.cG, cor.cB);

        GLUquadricObj *cilindro = gluNewQuadric();
        gluQuadricDrawStyle(cilindro, GLU_FILL);
        gluCylinder(cilindro, cBase, cTopo, cAltura, 20, 20);
        cout << cBase << endl;
        cout << cTopo << endl;
        cout << cAltura << endl;
        gluDeleteQuadric(cilindro);
        glPopMatrix();
    }
};

#endif