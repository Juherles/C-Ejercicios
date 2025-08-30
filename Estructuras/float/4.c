#include <stdio.h>

int main() {
    float x, y;
    printf("Ingrese dos numeros decimales separados por espacio: ");
    scanf("%f %f", &x, &y);

    if (x > y)
        printf("%.2f es mayor que %.2f\n", x, y);
    else if (x < y)
        printf("%.2f es menor que %.2f\n", x, y);
    else
        printf("Ambos numeros son iguales.\n");

    return 0;
}
