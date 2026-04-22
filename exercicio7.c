#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSorteado, tentativa, contador = 0;

    srand(time(NULL));
    numeroSorteado = rand() % 101;

    printf("Tente acertar o numero de 0 a 100!\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &tentativa);
        contador++;

        if (tentativa < numeroSorteado) {
            printf("O numero sorteado e MAIOR.\n");
        } else if (tentativa > numeroSorteado) {
            printf("O numero sorteado e MENOR.\n");
        } else {
            printf("Voce acertou em %d tentativas!\n", contador);
        }

    } while (tentativa != numeroSorteado);

    return 0;
}
