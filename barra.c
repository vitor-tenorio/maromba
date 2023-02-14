void montaBarra() {
    //glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    GLUquadricObj *cylinder;
    cylinder = gluNewQuadric();
    gluQuadricDrawStyle(cylinder, GLU_FILL);
    
    glTranslatef(-1.0f, 0.0f, -1.0f);
    glColor3f(0.3f, 0.3f, 0.3f);
    gluCylinder(cylinder, 0.05, 0.05, 2.0, 20, 20); // Desenha a barra
}