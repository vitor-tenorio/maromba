#include <GL/glut.h>

void montaBarra() {
    //glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    GLUquadricObj *cylinder;
    cylinder = gluNewQuadric();
    gluQuadricDrawStyle(cylinder, GLU_FILL);
    
    glTranslatef(-1.0f, -1.0f, -1.0f);
    glColor3f(0.3f, 0.3f, 0.3f);
    gluCylinder(cylinder, 0.05, 0.05, 2.0, 20, 20); // Desenha a barra

    glTranslatef(0.0f, 0.0f, 0.2f);
    glColor3f(1.0f, 0.0f, 0.0f);
    gluCylinder(cylinder, 0.2, 0.2, 0.1, 20, 40); // Desenha uma anilha

    glTranslatef(0.0f, 0.0f, 1.5f);
    gluCylinder(cylinder, 0.2, 0.2, 0.1, 20, 40); // Desenha uma anilha


    //gluQuadricDrawStyle(cylinder, GLU_FILL);
    //gluCylinder(cylinder, 0.05, 0.05, 2.0, 20, 20); // Desenha o cilindro
}