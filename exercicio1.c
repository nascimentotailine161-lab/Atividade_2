#include <stdio.h>

int main() {
    int totalSegundos, horas, minutos, segundos, resto;
    
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &totalSegundos);

    horas = totalSegundos / 3600; 
    
    resto = totalSegundos % 3600;

    minutos = resto / 60;

    segundos = resto % 60;
    
    printf("%d segundos correspondem a: %d horas, %d minutos e %d segundos.\n", 
	totalSegundos, horas, minutos, segundos);

    return 0;
}
