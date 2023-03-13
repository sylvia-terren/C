#include <stdio.h>

int main() {
    float a = 12.14;
    float b = 26.76;

    printf("%.1f / %.1f = %.3f\n", a, b, a / b);
    printf("%.1f + %.1f = %.3f\n", a, b, a + b);
    printf("%.1f - %.1f = %.3f\n", a, b, a - b);
    printf("%.1f * %.1f = %.3f\n", a, b, a * b);
    return 0;
}
