#include <stdio.h>
int main() {
    char c;
    printf("Ingresa una letra minuscula: ");
    scanf(" %c", &c);
    if (c >= 'a' && c <= 'z')
        c = c - ('a' - 'A'); // resta 32
    printf("Letra en mayuscula: %c\n", c);
    return 0;
}