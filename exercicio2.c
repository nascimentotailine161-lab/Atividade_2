#include <stdio.h>

int main() {
    int n1, n2, n3;
    float media;

    printf("digite o primeiro numero: ");
    scanf("%d", &n1); 
    
    printf("digite o segundo numero: ");
    scanf("%d", &n2);
    
    printf("digite o terceiro numero: ");
    scanf("%d", &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf("A media e: %.2f\n", media);

    return 0;
}
