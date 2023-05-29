/*
Exercício 6 - Repetição
Luis Eduardo Braga Santos
23/05/2023
*/
#include <stdio.h>

int main() {
    int numero;

    printf("Digite números aleatórios (É proibido números negativos!):\n");

    do {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero >= 0) {
            printf("O número digitado: %d\n", numero);
            printf("Continue! \n");

        }
    } while (numero >= 0);

    printf("Você digitou um número negativo, ADEUS!\n");

    return 0;
}
