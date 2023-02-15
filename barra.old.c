void montaApoiosBarra()
{
    glColor3f(0.1, 0.1, 0.1); // Define a cor como um cinza azulado

    glBegin(GL_QUADS);
    // Face frontal
    glVertex3f(-0.3, -1.0, 0.6);
    glVertex3f(-0.1, -1.0, 0.6);
    glVertex3f(-0.1, 0.5, 0.6);
    glVertex3f(-0.3, 0.5, 0.6);

    // Face frontal
    glVertex3f(-0.3, -1.0, 0.4);
    glVertex3f(-0.1, -1.0, 0.4);
    glVertex3f(-0.1, 0.5, 0.4);
    glVertex3f(-0.3, 0.5, 0.4);

    // Face frontal
    glVertex3f(-0.3, -1.0, 0.4);
    glVertex3f(-0.3, 0.5, 0.4);
    glVertex3f(-0.3, 0.5, 0.6);
    glVertex3f(-0.3, -1.0, 0.6);

    // Face frontal
    glVertex3f(-0.1, -1.0, 0.4);
    glVertex3f(-0.1, 0.5, 0.4);
    glVertex3f(-0.1, 0.5, 0.6);
    glVertex3f(-0.1, -1.0, 0.6);
    glEnd();

    glBegin(GL_QUADS);
    // Face frontal
    glVertex3f(-0.3, -1.0, 1.6);
    glVertex3f(-0.1, -1.0, 1.6);
    glVertex3f(-0.1, 0.5, 1.6);
    glVertex3f(-0.3, 0.5, 1.6);

    // Face frontal
    glVertex3f(-0.3, -1.0, 1.4);
    glVertex3f(-0.1, -1.0, 1.4);
    glVertex3f(-0.1, 0.5, 1.4);
    glVertex3f(-0.3, 0.5, 1.4);

    // Face frontal
    glVertex3f(-0.3, -1.0, 1.4);
    glVertex3f(-0.3, 0.5, 1.4);
    glVertex3f(-0.3, 0.5, 1.6);
    glVertex3f(-0.3, -1.0, 1.6);

    // Face frontal
    glVertex3f(-0.1, -1.0, 1.4);
    glVertex3f(-0.1, 0.5, 1.4);
    glVertex3f(-0.1, 0.5, 1.6);
    glVertex3f(-0.1, -1.0, 1.6);
    glEnd();
}
void montaBarra()
{
    GLUquadricObj *cylinder;
    cylinder = gluNewQuadric();
    gluQuadricDrawStyle(cylinder, GLU_FILL);

    glTranslatef(-1.0f, 0.0f, -1.0f);
    glColor3f(0.3f, 0.3f, 0.3f);
    gluCylinder(cylinder, 0.05, 0.05, 2.0, 20, 20); // Desenha a barra

    montaApoiosBarra();
}