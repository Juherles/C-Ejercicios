#include <stdio.h>

int main() {
    double num, suma = 0.0;
    for (int i = 0; i < 5; i++) {
        printf("Ingresa el numero %d: ", i + 1);
        scanf("%lf", &num);
        suma += num;
    }
    printf("El promedio es: %.5f\n", suma / 5.0);
    return 0;
}