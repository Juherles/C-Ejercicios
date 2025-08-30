#include <stdio.h>
#include <math.h>  // Necesario para pow()

int main() {
    double base, exponente, resultado;

    printf("Ingresa la base y el exponente: ");
    scanf("%lf %lf", &base, &exponente);

    resultado = pow(base, exponente);  // pow(base, exponente) devuelve double

    printf("%.2f ^ %.2f = %.10f\n", base, exponente, resultado);

    return 0;
}
