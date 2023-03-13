#include <stdio.h>

int main() {
    float a, b;
    printf("Entrez un premier nombre :");
    scanf("%f", &a);
    printf("Entrez un deuxième nombre :");
    scanf("%f", &b);

    printf("%.1f / %.1f = %.3f\n", a, b, a / b);
    printf("%.1f + %.1f = %.3f\n", a, b, a + b);
    printf("%.1f - %.1f = %.3f\n", a, b, a - b);
    printf("%.1f * %.1f = %.3f\n", a, b, a * b);
    return 0;
}
