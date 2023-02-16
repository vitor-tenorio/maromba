#ifndef CILINDRO
#define CILINDRO

#include "coordenada.cpp"
#include "cor.cpp"
#include <GL/glut.h>
#include <math.h>

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
        drawCircle(cBase, 20);
        glPushMatrix();
        glTranslatef(0.0f, 0.0f, cAltura);
        drawCircle(cBase, 20);
        glPopMatrix();

        gluCylinder(cilindro, cBase, cTopo, cAltura, 20, 20);
        gluDeleteQuadric(cilindro);
        glPopMatrix();
    }


    void drawCircle(float radius, int numOfSides)
    {
        int i;
        glBegin(GL_TRIANGLE_FAN);
            glVertex3f(0, 0, 0);  // Centro do círculo
            for (i = 0; i <= numOfSides; i++)
            {
                float angle = 2 * M_PI * i / numOfSides;
                glVertex3f(radius * cos(angle), radius * sin(angle), 0);
            }
        glEnd();
    }
};

#endif