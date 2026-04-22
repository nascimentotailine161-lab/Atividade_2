#include <stdio.h>

int main() {
    int i, j, soma = 0;

    for (i = 0; i <= 6; i++) {
        for (j = i; j <= 6; j++) {
           
            if (i == 4 || j == 4) {
                
                if (i == 4) {
                    soma++;
                }
                if (j == 4) {
                    soma++;
                }
            }
        }
    }

    printf("A soma de todos os numeros 4 que aparecem no domino e: %d\n", soma);

    return 0;
}
