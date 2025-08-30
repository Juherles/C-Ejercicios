#include <stdio.h>
int main() {
    char c;
    printf("Ingresa un caracter: ");
    scanf(" %c", &c);
    if (c >= '0' && c <= '9')
        printf("'%c' es un dígito numérico\n", c);
    else
        printf("'%c' NO es un dígito numérico\n", c);
    return 0;
}