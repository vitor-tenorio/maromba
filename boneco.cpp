Cor amarelo = Cor(200, 200, 50);
Cor bege = Cor(180, 150, 120);
Cor vermelho = Cor(255, 0, 0);

void montaCabeca(bool foiEnforcado)
{
    Coordenada coordenada = Coordenada(500, 125, 400);
    glPushMatrix();
    glTranslatef(coordenada.cX, coordenada.cY, coordenada.cZ);
    if (foiEnforcado) {
        glColor3f(vermelho.cR, vermelho.cG, vermelho.cB);
    } else {
        glColor3f(bege.cR, bege.cG, bege.cB);
    }
    glutSolidSphere(0.2, 20, 20);
    glPopMatrix();
}

void montaTorso(bool flexaoFeita)
{
    Retangulo corpo = Retangulo(Coordenada(500, 480, 350), bege, 1100, 700, 150);
    corpo.desenhar(0, 0, 0, 0);

    int larguraPeito = flexaoFeita ? 250 : 290;
    int alturaPeito = flexaoFeita ? 90 : 50;

    Retangulo peito1 = Retangulo(Coordenada(600, 380, 400), vermelho, 200, larguraPeito, alturaPeito);
    peito1.desenhar(0, 0, 0, 0);

    Retangulo peito2 = Retangulo(Coordenada(400, 380, 400), vermelho, 200, larguraPeito, alturaPeito);
    peito2.desenhar(0, 0, 0, 0);
}

void montaBracos(bool flexaoFeita)
{
    Cor vermelho = Cor(100, 0, 0);
    if (!flexaoFeita)
    {
        Retangulo braco1 = Retangulo(Coordenada(750, 380, 450), bege, 180, 180, 600);
        braco1.desenhar(220, 0, 1, 0);
        Retangulo antebraco1 = Retangulo(Coordenada(835, 380, 700), bege, 180, 180, 620);
        antebraco1.desenhar(0, 0, 1, 0);

        Retangulo braco2 = Retangulo(Coordenada(250, 380, 450), bege, 180, 180, 600);
        braco2.desenhar(140, 0, 1, 0);
        Retangulo antebraco2 = Retangulo(Coordenada(165, 380, 700), bege, 180, 180, 620);
        antebraco2.desenhar(0, 0, 1, 0);
    }
    else
    {
        glTranslatef(0, 0, -0.4);
        Retangulo braco1 = Retangulo(Coordenada(750, 380, 450), bege, 180, 180, 600);
        braco1.desenhar(-220, 0, 1, 0);
        Retangulo braco2 = Retangulo(Coordenada(250, 380, 450), bege, 180, 180, 600);
        braco2.desenhar(-140, 0, 1, 0);

        glTranslatef(0, 0, -0.4);
        Retangulo antebraco1 = Retangulo(Coordenada(835, 380, 700), bege, 180, 180, 620);
        antebraco1.desenhar(0, 0, 1, 0);
        Retangulo antebraco2 = Retangulo(Coordenada(165, 380, 700), bege, 180, 180, 620);
        antebraco2.desenhar(0, 0, 1, 0);
    }
}

void montaPernas()
{
    Cor cinza = Cor(50, 50, 150);

    Retangulo coxa1 = Retangulo(Coordenada(400, 950, 350), cinza, 800, 180, 150);
    coxa1.desenhar(0, 0, 0, 0);
    Retangulo canela1 = Retangulo(Coordenada(400, 1110, 230), bege, 500, 180, 150);
    canela1.desenhar(90, 1, 0, 0);

    Retangulo coxa2 = Retangulo(Coordenada(600, 950, 350), cinza, 800, 180, 150);
    coxa2.desenhar(0, 0, 0, 0);
    Retangulo canela2 = Retangulo(Coordenada(600, 1110, 230), bege, 500, 180, 150);
    canela2.desenhar(90, 1, 0, 0);
}

void montaBoneco(bool flexaoFeita, bool foiEnforcado)
{
    montaCabeca(foiEnforcado);
    montaTorso(flexaoFeita);
    montaPernas();
    montaBracos(flexaoFeita);
}