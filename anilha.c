#include <math.h>

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

void montaAnilha() {
    GLUquadricObj *cylinder;
    cylinder = gluNewQuadric();
    gluQuadricDrawStyle(cylinder, GLU_FILL);

    glTranslatef(0.0f, 0.0f, 0.2f);
    glColor3f(1.0f, 0.0f, 0.0f);
    drawCircle(0.2, 20);
    gluCylinder(cylinder, 0.2, 0.2, 0.1, 20, 40);
    glTranslatef(0.0f, 0.0f, 0.1f);
    drawCircle(0.2, 20);

    glTranslatef(0.0f, 0.0f, 1.4f);
    drawCircle(0.2, 20);
    gluCylinder(cylinder, 0.2, 0.2, 0.1, 20, 40);
    glTranslatef(0.0f, 0.0f, 0.1f);
    drawCircle(0.2, 20);
}