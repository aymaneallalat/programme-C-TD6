#include <stdio.h>

int main() {
    int n, somme = 0;

    printf("Entrez un nombre : ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    while (n > 0) {
        somme += n % 10;
        n /= 10;
    }

    printf("La somme des chiffres est : %d\n", somme);

    return 0;
}
