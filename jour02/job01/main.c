#include <stdio.h>

float my_mul(float a, float b) {
    float resultat = a * b;
    printf("%d * %d = %d\n", a, b, resultat);
    return resultat;
}

float my_add(float a, float b) {
    float resultat = a + b;
    printf("%d + %d = %d\n", a, b, resultat);
    return resultat;
}

float my_sub(float a, float b) {
    float resultat = a - b;
    printf("%d - %d = %d\n", a, b, resultat);
    return resultat;
}

float my_div(float a, float b) {
    float resultat = a / b;
    printf("%d / %d = %d\n", a, b, resultat);
    return resultat;
}

int my_mod(float a, float b) {
    float resultat = a % b;
    printf("%d mod %d = %d\n", a, b, resultat);
    return resultat;
}

int main() {
    float a;
    float b;
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