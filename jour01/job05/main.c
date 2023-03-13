#include <stdio.h>

int main() {
    int a;
    int b;
    printf("Entrez le un premier chiffre :");
    scanf("%d", &a);
    printf("Entrez un deuxième chiffre :");
    scanf("%d", &b);
    
    printf("a / b = %d\n", a / b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    return 0;
}