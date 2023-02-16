#include <cstdlib>
#include <iostream>
#include <GL/glut.h>
#include "casa.c"
#include "barra.cpp"
#include "anilha.c"
#include "banco.cpp"
#include "boneco.cpp"
#include "retangulo.cpp"
#include <math.h>

GLfloat horzangle = 0, vertangle = 0, dist = -7.0;

void display(void)
{
    glEnable(GL_COLOR_MATERIAL);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glTranslatef(0.0f, 0.0f, dist);
    glRotatef(180, 0.0f, 0.0f, 1.0f);
    glRotatef(vertangle, 1.0f, 0.0f, 0.0f);
    glRotatef(horzangle, 0.0f, 0.0f, 1.0f);

    //  montaCasa(); // Somente para teste
    montaBarra();
    //  montaAnilha();
    montaBanco();
    montaBoneco();

    glFlush();
    glutSwapBuffers();
}

void ChangeSize(GLsizei width, GLsizei height)
{
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(30.0, width / height, 1.0, 10.0);
}

void SpecialKeys(int key, int x, int y)
{
    if (key == GLUT_KEY_UP)
        vertangle -= 5;

    if (key == GLUT_KEY_DOWN)
        vertangle += 5;

    if (key == GLUT_KEY_LEFT)
        horzangle -= 5;

    if (key == GLUT_KEY_RIGHT)
        horzangle += 5;

    glutPostRedisplay();
}

void KeyboardFunc(unsigned char key, int x, int y)
{
    if (key == 27)
        exit(0); // termina o programa caso tecle "esc"

    if (key == '+' || key == '=')
        dist += 0.5;

    if (key == '-')
        dist -= 0.5;

    glutPostRedisplay();
}

void init(void)
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // define a cor de fundo como branco
    glClear(GL_COLOR_BUFFER_BIT);         // limpa a janela com a cor de fundo
    glShadeModel(GL_SMOOTH);
    // glEnable(GL_LIGHTING);
    // glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGBA);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Marombinha");
    init();
    glutReshapeFunc(ChangeSize);
    glutKeyboardFunc(KeyboardFunc);
    glutSpecialFunc(SpecialKeys);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
