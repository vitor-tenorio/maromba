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
#include <stdbool.h>
#include <ctime>
#include <iostream>

using namespace std;

bool apagaLuz = true;

GLfloat horzangle = 0, vertangle = 30, dist = -6.1;
bool mouseClicked = false;
int plateIndex = 0;
int MAX_PLATES = 3;
bool flexaoFeita = false;
int cliques = 0;
int cliquesNecessarios = 5;
bool foiEnforcado = false;

std::time_t start_time = std::time(nullptr);

void mouseCallback(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        if (cliques == 0 && !flexaoFeita) {
            start_time = std::time(nullptr);
        }
        cliques += 1;
        std::time_t now = std::time(nullptr);
        double time_diff = std::difftime(now, start_time);
        if (time_diff > 5) {
            foiEnforcado = true;
        } else if (cliques == cliquesNecessarios) {
            flexaoFeita = !flexaoFeita;
            cliques = 0;
            if (!flexaoFeita) {
                std::cout << "Feito em " << time_diff << " segundos" << std::endl;
            }
        }
        glutPostRedisplay();    
    }
}

void display(void)
{
    glEnable(GL_COLOR_MATERIAL);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    float luzDifusa[] = {1.0f, 1.0f, 1.0f, 1.0f};
    float posicaoLuz[] = {50.0f, 50.0f, 50.0f, 1.0f};
    GLfloat mat_shininess[] = {80.0};
    glLightfv(GL_LIGHT1, GL_DIFFUSE, luzDifusa);
    glLightfv(GL_LIGHT1, GL_POSITION, posicaoLuz);
    glLightfv(GL_LIGHT2, GL_POSITION, posicaoLuz);
    GLfloat cor[] = {1.0, 1.0, 1.0, 0.5};
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    glMaterialfv(GL_FRONT, GL_DIFFUSE, cor);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);

    if (!apagaLuz)
        glEnable(GL_LIGHT1);
    else
        glDisable(GL_LIGHT1);

    glTranslatef(0.0f, 0.0f, dist);
    glRotatef(180, 0.0f, 0.0f, 1.0f);
    glRotatef(vertangle, 1.0f, 0.0f, 0.0f);
    glRotatef(horzangle, 0.0f, 0.0f, 1.0f);

    //  montaCasa(); // Somente para teste
    montaBarra(flexaoFeita, plateIndex, foiEnforcado);
    //  montaAnilha();
    montaBanco();
    montaBoneco(flexaoFeita, foiEnforcado);

    glPopMatrix();
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
    switch (key)
    {
    case 27:
        exit(0); // termina o programa caso tecle "esc"
    case '+':
    case '=':
        dist += 0.5;
        break;
    case '-':
        dist -= 0.5;
        break;
    case 'a':
        apagaLuz = !apagaLuz;
        break;
    case 'r':
        if (foiEnforcado) {
            foiEnforcado = false;
            cliques = 0;
            flexaoFeita = false;
        }
        break;
    case 32: // Barra de espaço
        if (plateIndex == MAX_PLATES)
            plateIndex = 0;
        else
            plateIndex += 1;

        cliquesNecessarios = (1 + plateIndex) * 5;
        break;
    }

    glutPostRedisplay();
}

void init(void)
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // define a cor de fundo como branco
    glClear(GL_COLOR_BUFFER_BIT);         // limpa a janela com a cor de fundo
    glShadeModel(GL_SMOOTH);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    GLfloat luzAmbiente[] = {0.8f, 0.8f, 0.8f, 1.0f};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, luzAmbiente);
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
    glutMouseFunc(mouseCallback);
    glutKeyboardFunc(KeyboardFunc);
    glutSpecialFunc(SpecialKeys);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
