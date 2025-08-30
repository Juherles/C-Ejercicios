#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1; // usar long long porque factorial crece rápido
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: no existe factorial de numeros negativos.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("El factorial de %d es: %lld\n", n, factorial);
    }

    return 0;
}
