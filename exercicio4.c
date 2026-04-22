#include <stdio.h>

int main() {
    int n1, n2, mmc;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if (n1 > n2) {
        mmc = n1;
    } else {
        mmc = n2;
    }

 
    while (1) {
    	
        if (mmc % n1 == 0 && mmc % n2 == 0) {
            printf("O MMC de %d e %d e: %d\n", n1, n2, mmc);
            break; !
        
        
        mmc++;
    }

    return 0;
}
