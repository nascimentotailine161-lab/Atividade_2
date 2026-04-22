#include <stdio.h>
#include <ctype.h> 

int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra); 

   
    letra = tolower(letra);

   
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
    printf("A letra '%c' e uma VOGAL.\n", letra);
    } 
    else {
    printf("A letra '%c' e uma CONSOANTE.\n", letra);
    }

    return 0;
}
