#include <cstdlib>
#include <iostream>
#include <GL/glut.h>
#include "casa.c"


GLfloat horzangle = -45.0, vertangle = 30.0, distance = -3.0;

void RenderScene(void)
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0f, 0.0f, distance);
    glRotatef(vertangle, 1.0f, 0.0f, 0.0f);
    glRotatef(horzangle, 0.0f, 1.0f, 0.0f);
    montaCasa(); // Somente para teste
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
    if (key == 27) exit(0);   // termina o programa caso tecle "esc"

    if (key == '+') distance += 0.5;

    if (key == '-')  distance -= 0.5;

    glutPostRedisplay();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGBA);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Marombinha");
    glutReshapeFunc(ChangeSize);
    glutKeyboardFunc(KeyboardFunc);
    glutSpecialFunc(SpecialKeys);
    glutDisplayFunc(RenderScene);
    glutMainLoop();
    return 0;
}