#include <stdio.h>

int main() {
    double n;
    printf("Ingresa un numero: ");
    scanf("%lf", &n);

    if (n > 0)
        printf("El numero es positivo.\n");
    else if (n < 0)
        printf("El numero es negativo.\n");
    else
        printf("El numero es cero.\n");

    return 0;
}