#include <stdio.h>
#include <math.h>

float my_mul(float a, float b) {
    float resultat = a * b;
    return resultat;
}

float my_add(float a, float b) {
    float resultat = a + b;
    return resultat;
}

float my_sub(float a, float b) {
    float resultat = a - b;
    return resultat;
}

float my_div(float a, float b) {
    float resultat = a / b;
    return resultat;
}

float my_mod(float a, float b) {
    float resultat = fmod(a, b);
    return resultat;
}

float my_pow(float a, float b) {
    float resultat = pow(a, b);
    return resultat;
}

int main() {
    float a;
    float b;
    char sign;

    printf("Entrez un premier nombre : ");
    scanf("%f", &a);

    printf("Entrez un deuxième nombre : ");
    scanf("%f", &b);

    printf("Entrez une opération (+, -, *, /, %%, ^) : ");
    scanf(" %c", &sign);

    float resultat;
    switch(sign) {
        case '+':
            resultat = my_add(a, b);
            break;
        case '-':
            resultat = my_sub(a, b);
            break;
        case '*':
            resultat = my_mul(a, b);
            break;
        case '/':
            resultat = my_div(a, b);
            break;
        case '%':
            resultat = my_mod(a, b);
            break;
        case '^':
            resultat = my_pow(a, b);
            break;
        default:
            printf("Opération non reconnue.\n");
            return 1;
    }

    printf("%f %c %f = %f\n", a, sign, b, resultat);

    return 0;
}
