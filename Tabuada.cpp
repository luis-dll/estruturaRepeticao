/*
Exercício 5 - Repetição
Luis Eduardo Braga Santos
23/05/2023
*/
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número e eu imprimirei a tabuada dele: ");
    scanf("%d", &numero);

    printf("Tabuada de %d:\n", numero);

    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
