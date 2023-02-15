// Tamanho do mapa em 3D
#define TAMANHO 1000
#define ALTURA 1000       // Y
#define LARGURA 1000      // X
#define PROFUNDIDADE 1000 // Z

float converteUnidadeDeMedida(int tamanho)
{
    return float(tamanho) / float(TAMANHO);
}