#include <stdio.h>

int main() {
    double a, b;
    printf("Ingresa dos numeros: ");
    scanf("%lf %lf", &a, &b);
    printf("La suma es: %.10f\n", a + b);
    return 0;
}