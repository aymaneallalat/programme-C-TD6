#include <stdio.h>

int main() {
    int N, i = 1, somme = 0;

    printf("Entrez un entier N : ");
    scanf("%d", &N);

    while (i <= N) {
        somme += i;  
        i++;
    }

    printf("La somme des entiers de 1 à %d est : %d\n", N, somme);

    return 0;
}