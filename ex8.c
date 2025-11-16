#include <stdio.h>

int main() {
    int n, i, premier = 1;

    printf("Entrez un nombre : ");
    scanf("%d", &n);

    if (n <= 1) {
        premier = 0;
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                premier = 0;
                break;
            }
        }
    }

    if (premier)
        printf("%d est un nombre premier.\n", n);
    else
        printf("%d n'est pas un nombre premier.\n", n);

    return 0;
}
