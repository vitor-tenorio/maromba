void montaCorpo() {
    glBegin(GL_QUADS);
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

        // Face superior
        glVertex3f(-1.0, -0.5, -1.0);
        glVertex3f(1.0, -0.5, -1.0);
        glVertex3f(1.0, -0.5, -0.5);
        glVertex3f(-1.0, -0.5, -0.5);
    glEnd();
}

void montaBoneco() {
    glColor3f(0.96, 0.87, 0.70);
    glTranslatef(-0.75f, -0.4f, -0.75f);

   // Desenha a cabeça como uma esfera
   glutSolidSphere(0.2, 20, 20);

   glColor3f(0.63, 0.13, 0.94);
    montaCorpo();
}