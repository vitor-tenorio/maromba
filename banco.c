void montaApoios() {
    glColor3f(0.4, 0.4, 0.4);  // Define a cor como um cinza azulado
    
    glBegin(GL_QUADS);
        // Face frontal
        glVertex3f(0.5, -1.0, -0.8);
        glVertex3f(0.7, -1.0, -0.8);
        glVertex3f(0.7, -0.5, -0.8);
        glVertex3f(0.5, -0.5, -0.8);

        // Face frontal
        glVertex3f(0.5, -1.0, -0.7);
        glVertex3f(0.7, -1.0, -0.7);
        glVertex3f(0.7, -0.5, -0.7);
        glVertex3f(0.5, -0.5, -0.7);

        // Face frontal
        glVertex3f(0.5, -1.0, -0.7);
        glVertex3f(0.5, -0.5, -0.7);
        glVertex3f(0.5, -0.5, -0.8);
        glVertex3f(0.5, -1.0, -0.8);

        // Face frontal
        glVertex3f(0.7, -1.0, -0.7);
        glVertex3f(0.7, -0.5, -0.7);
        glVertex3f(0.7, -0.5, -0.8);
        glVertex3f(0.7, -1.0, -0.8);
    glEnd();

        
    glBegin(GL_QUADS);
        // Face frontal
        glVertex3f(-0.7, -1.0, -0.8);
        glVertex3f(-0.5, -1.0, -0.8);
        glVertex3f(-0.5, -0.5, -0.8);
        glVertex3f(-0.7, -0.5, -0.8);

        // Face frontal
        glVertex3f(-0.7, -1.0, -0.7);
        glVertex3f(-0.5, -1.0, -0.7);
        glVertex3f(-0.5, -0.5, -0.7);
        glVertex3f(-0.7, -0.5, -0.7);

        // Face frontal
        glVertex3f(-0.7, -1.0, -0.7);
        glVertex3f(-0.7, -0.5, -0.7);
        glVertex3f(-0.7, -0.5, -0.8);
        glVertex3f(-0.7, -1.0, -0.8);

        // Face frontal
        glVertex3f(-0.5, -1.0, -0.7);
        glVertex3f(-0.5, -0.5, -0.7);
        glVertex3f(-0.5, -0.5, -0.8);
        glVertex3f(-0.5, -1.0, -0.8);
    glEnd();
}

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

        // Face direita
        glVertex3f(-1.0, -0.5, -1.0);
        glVertex3f(-1.0, -0.5, -0.5);
        glVertex3f(-1.0, -0.6, -0.5);
        glVertex3f(-1.0, -0.6, -1.0);

        // Face esquerda
        glVertex3f(1.0, -0.5, -1.0);
        glVertex3f(1.0, -0.5, -0.5);
        glVertex3f(1.0, -0.6, -0.5);
        glVertex3f(1.0, -0.6, -1.0);

        glColor3f(0.0, 0.0, 1.0);  // Define a cor azul
        // Face superior
        glVertex3f(-1.0, -0.5, -1.0);
        glVertex3f(1.0, -0.5, -1.0);
        glVertex3f(1.0, -0.5, -0.5);
        glVertex3f(-1.0, -0.5, -0.5);

        // Face inferior
        glVertex3f(-1.0, -0.6, -1.0);
        glVertex3f(1.0, -0.6, -1.0);
        glVertex3f(1.0, -0.6, -0.5);
        glVertex3f(-1.0, -0.6, -0.5);
    glEnd();
    montaApoios();
}