void montaCabeca()
{
    Cor azul = Cor(0, 0, 145);
    Coordenada coordenada = Coordenada(500, 125, 400);
    glPushMatrix();
    glTranslatef(coordenada.cX, coordenada.cY, coordenada.cZ);
    glColor3f(azul.cR, azul.cG, azul.cB);
    glutSolidSphere(0.2, 20, 20);
    glPopMatrix();
}

void montaTorso()
{
    Cor azul = Cor(0, 0, 100);
    Retangulo corpo = Retangulo(Coordenada(500, 480, 350), azul, 1100, 700, 150);
    corpo.desenhar(0, 0, 0, 0);
}

void montaBracos(bool mouseClicked)
{
    Cor vermelho = Cor(100, 0, 0);
    if (!mouseClicked)
    {
        Retangulo braco1 = Retangulo(Coordenada(750, 380, 450), vermelho, 180, 180, 600);
        braco1.desenhar(220, 0, 1, 0);
        Retangulo antebraco1 = Retangulo(Coordenada(835, 380, 700), vermelho, 180, 180, 620);
        antebraco1.desenhar(0, 0, 1, 0);

        Retangulo braco2 = Retangulo(Coordenada(250, 380, 450), vermelho, 180, 180, 600);
        braco2.desenhar(140, 0, 1, 0);
        Retangulo antebraco2 = Retangulo(Coordenada(165, 380, 700), vermelho, 180, 180, 620);
        antebraco2.desenhar(0, 0, 1, 0);
    }
    else
    {
        glTranslatef(0, 0, -0.4);
        Retangulo braco1 = Retangulo(Coordenada(750, 380, 450), vermelho, 180, 180, 600);
        braco1.desenhar(-220, 0, 1, 0);
        Retangulo braco2 = Retangulo(Coordenada(250, 380, 450), vermelho, 180, 180, 600);
        braco2.desenhar(-140, 0, 1, 0);

        glTranslatef(0, 0, -0.4);
        Retangulo antebraco1 = Retangulo(Coordenada(835, 380, 700), vermelho, 180, 180, 620);
        antebraco1.desenhar(0, 0, 1, 0);
        Retangulo antebraco2 = Retangulo(Coordenada(165, 380, 700), vermelho, 180, 180, 620);
        antebraco2.desenhar(0, 0, 1, 0);
    }
}

void montaPernas()
{
    Cor green = Cor(0, 100, 0);

    Retangulo coxa1 = Retangulo(Coordenada(400, 950, 350), green, 800, 180, 150);
    coxa1.desenhar(0, 0, 0, 0);
    Retangulo canela1 = Retangulo(Coordenada(400, 1110, 230), green, 500, 180, 150);
    canela1.desenhar(90, 1, 0, 0);

    Retangulo coxa2 = Retangulo(Coordenada(600, 950, 350), green, 800, 180, 150);
    coxa2.desenhar(0, 0, 0, 0);
    Retangulo canela2 = Retangulo(Coordenada(600, 1110, 230), green, 500, 180, 150);
    canela2.desenhar(90, 1, 0, 0);
}

void montaBoneco(bool mouseClicked)
{
    // glColor3f(0.96, 0.87, 0.70);
    // glTranslatef(-0.75f, -0.4f, -0.75f);
    // glRotatef(90, 0.0f, 1.0f, 0.0f);
    // glRotatef(90, 0.0f, 0.0f, 1.0f);
    // glTranslatef(-0.65, -0.25, 0);
    montaCabeca();
    montaTorso();
    montaPernas();
    montaBracos(mouseClicked);
}