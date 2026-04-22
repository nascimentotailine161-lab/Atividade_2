#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o seu peso (kg): ");
    scanf("%f", &peso);
    printf("Digite a sua altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC e: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("Classificacao: Peso normal\n");
    } else if (imc >= 25 && imc < 29.9) {
        printf("Classificacao: Sobrepeso\n");
    } else {
        printf("Classificacao: Obesidade\n");
    }

    return 0;
}
