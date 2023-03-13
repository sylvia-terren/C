#include <stdio.h>

int my_mul(int a, int b) {
    int resultat = a * b;
    printf("%d * %d = %d\n", a, b, resultat);
    return resultat;
}

int my_add(int a, int b) {
    int resultat = a + b;
    printf("%d + %d = %d\n", a, b, resultat);
    return resultat;
}

int my_sub(int a, int b) {
    int resultat = a - b;
    printf("%d - %d = %d\n", a, b, resultat);
    return resultat;
}

int my_div(int a, int b) {
    int resultat = a / b;
    printf("%d / %d = %d\n", a, b, resultat);
    return resultat;
}

int my_mod(int a, int b) {
    int resultat = a % b;
    printf("%d mod %d = %d\n", a, b, resultat);
    return resultat;
}

int main() {
    int a;
    int b;
    printf("Entrez le un premier chiffre :");
    scanf("%d", &a);
    printf("Entrez un deuxième chiffre :");
    scanf("%d", &b);

    my_mul(a, b);
    my_add(a, b);
    my_sub(a, b);
    my_div(a, b);
    my_mod(a, b);
    return 0;
}