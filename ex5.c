#include <stdio.h>

int main() {
    int n, i = 1;
    long long fact = 1;  
    printf("Entrez un nombre entier : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("La factorielle n'est pas definie pour les nombres negatifs.\n");
    } else {
        do {
            fact *= i; 
            i++;
        } while (i <= n);

        printf("La factorielle de %d est : %lld\n", n, fact);
    }

    return 0;
}
