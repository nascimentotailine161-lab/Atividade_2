#include <stdio.h>

int main() {
    float tamanhoMB, velocidadeMbps, tempoSegundos, tempoMinutos;

    printf("Tamanho do arquivo (MB): ");
    scanf("%f", &tamanhoMB);

    printf("Velocidade da Internet (Mbps): ");
    scanf("%f", &velocidadeMbps);

    tempoSegundos = (tamanhoMB * 8) / velocidadeMbps;
    tempoMinutos = tempoSegundos / 60;

    printf("Tempo aproximado: %.2f minutos\n", tempoMinutos);

    return 0;
}
