void montaBanco()
{
    glTranslatef(0.5f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
        glColor3f(0.4, 0.4, 0.8);  // Define a cor como um cinza azulado
        // Face frontal
        glVertex3f(-1.0, -0.5, -0.5);
        glVertex3f(1.0, -0.5, -0.5);
        glVertex3f(1.0, -0.6, -0.5);
        glVertex3f(-1.0, -0.6, -0.5);
        
        // Face traseira
        glVertex3f(-1.0, -0.5, -1.0);
        glVertex3f(1.0, -0.5, -1.0);
        glVertex3f(1.0, -0.6, -1.0);
        glVertex3f(-1.0, -0.6, -1.0);

        glColor3f(0.0, 0.0, 1.0);  // Define a cor azul
        // Face superior
        glVertex3f(-1.0, -0.5, -1.0);
        glVertex3f(1.0, -0.5, -1.0);
        glVertex3f(1.0, -0.5, -0.5);
        glVertex3f(-1.0, -0.5, -0.5);
    glEnd();
}