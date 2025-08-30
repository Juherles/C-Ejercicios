#include <stdio.h>
int main() {
    char c;
    printf("Ingresa un caracter: ");
    scanf(" %c", &c);
    printf("El código ASCII de '%c' es: %d\n", c, c);
    return 0;
}