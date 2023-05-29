/*
Exercício 4 - Repetição
Luis Eduardo Braga Santos
23/05/2023
*/
#include <stdio.h>

int main() {
    int i;

    printf("Esses são todos os pares de 100 a 0:\n");

    for (i = 100; i >= 0; i -= 2) {
        printf("%d\n", i);
    }

    return 0;
}
