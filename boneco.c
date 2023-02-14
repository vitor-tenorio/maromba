void montaCorpo() {
    glBegin(GL_QUADS);
        // Face superior
        glVertex3f(0.2, 0, -0.3);
        glVertex3f(1.0, 0, -0.3);
        glVertex3f(1.0, 0, 0.3);
        glVertex3f(0.2, 0, 0.3);

        // Face inferior
        glVertex3f(0.2, -0.1, -0.3);
        glVertex3f(1.0, -0.1, -0.3);
        glVertex3f(1.0, -0.1, 0.3);
        glVertex3f(0.2, -0.1, 0.3);

        glColor3f(0.50, 0.40, 0.30);
        // Face frontal
        glVertex3f(0.2, 0, 0.3);
        glVertex3f(1.0, 0, 0.3);
        glVertex3f(1.0, -0.1, 0.3);
        glVertex3f(0.2, -0.1, 0.3);
        
        // Face traseira
        glVertex3f(0.2, 0, -0.3);
        glVertex3f(1.0, 0, -0.3);
        glVertex3f(1.0, -0.1, -0.3);
        glVertex3f(0.2, -0.1, -0.3);

        // Face direita
        glVertex3f(0.2, 0, -0.3);
        glVertex3f(0.2, 0, 0.3);
        glVertex3f(0.2, -0.1, 0.3);
        glVertex3f(0.2, -0.1, -0.3);

        // Face esquerda
        glVertex3f(1.0, 0, -0.3);
        glVertex3f(1.0, 0, 0.3);
        glVertex3f(1.0, -0.1, 0.3);
        glVertex3f(1.0, -0.1, -0.3);
    glEnd();
}

void montaBracos() {
    glBegin(GL_QUADS);
        // Face frontal
        glVertex3f(0.3, 0.4, -0.4);
        glVertex3f(0.2, 0.4, -0.4);
        glVertex3f(0.2, -0.1, -0.4);
        glVertex3f(0.3, -0.1, -0.4);

        // Face frontal
        glVertex3f(0.3, 0.4, -0.3);
        glVertex3f(0.2, 0.4, -0.3);
        glVertex3f(0.2, -0.1, -0.3);
        glVertex3f(0.3, -0.1, -0.3);

        // Face frontal
        glVertex3f(0.3, 0.4, -0.3);
        glVertex3f(0.3, -0.1, -0.3);
        glVertex3f(0.3, -0.1, -0.4);
        glVertex3f(0.3, 0.4, -0.4);

        // Face frontal
        glVertex3f(0.2, 0.4, -0.3);
        glVertex3f(0.2, -0.1, -0.3);
        glVertex3f(0.2, -0.1, -0.4);
        glVertex3f(0.2, 0.4, -0.4);
    glEnd();

    glBegin(GL_QUADS);
        // Face frontal
        glVertex3f(0.3, 0.4, 0.4);
        glVertex3f(0.2, 0.4, 0.4);
        glVertex3f(0.2, -0.1, 0.4);
        glVertex3f(0.3, -0.1, 0.4);

        // Face frontal
        glVertex3f(0.3, 0.4, 0.3);
        glVertex3f(0.2, 0.4, 0.3);
        glVertex3f(0.2, -0.1, 0.3);
        glVertex3f(0.3, -0.1, 0.3);

        // Face frontal
        glVertex3f(0.3, 0.4, 0.3);
        glVertex3f(0.3, -0.1, 0.3);
        glVertex3f(0.3, -0.1, 0.4);
        glVertex3f(0.3, 0.4, 0.4);

        // Face frontal
        glVertex3f(0.2, 0.4, 0.3);
        glVertex3f(0.2, 0, 0.3);
        glVertex3f(0.2, 0, 0.4);
        glVertex3f(0.2, 0.4, 0.4);
    glEnd();


    glColor3f(0.96, 0.0, 0.0);
    glBegin(GL_QUADS);
        // Face frontal
        glVertex3f(0.9, 0.4, 0.05);
        glVertex3f(1.0, 0.4, 0.05);
        glVertex3f(1.0, -0.1, 0.05);
        glVertex3f(0.9, -0.1, 0.05);

        // Face frontal
        glVertex3f(0.9, 0.4, -0.05);
        glVertex3f(1.0, 0.4, -0.05);
        glVertex3f(1.0, -0.1, -0.05);
        glVertex3f(0.9, -0.1, -0.05);

        // Face frontal
        glVertex3f(0.9, 0.4, -0.05);
        glVertex3f(0.9, -0.1, -0.05);
        glVertex3f(0.9, -0.1, 0.05);
        glVertex3f(0.9, 0.4, 0.05);

        // Face frontal
        glVertex3f(1.0, 0.4, -0.05);
        glVertex3f(1.0, 0, -0.05);
        glVertex3f(1.0, 0, 0.05);
        glVertex3f(1.0, 0.4, 0.05);
    glEnd();
}

void montaBoneco() {
    glColor3f(0.96, 0.87, 0.70);
    glTranslatef(-0.75f, -0.4f, -0.75f);

   // Desenha a cabeça como uma esfera
   glutSolidSphere(0.2, 20, 20);

   //glColor3f(0.63, 0.13, 0.94);
    montaCorpo();
    montaBracos();
}