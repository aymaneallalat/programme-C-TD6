#include <stdio.h>

int main() {
    int n, i = 1;
    float valeur, somme = 0;

    printf("Combien de nombres voulez-vous entrer ? ");
    scanf("%d", &n);

    while (i <= n) {
        printf("Entrez la valeur %d : ", i);
        scanf("%f", &valeur);

        somme += valeur;
        i++;
    }

    printf("La moyenne est : %.2f\n", somme / n);

    return 0;
}
