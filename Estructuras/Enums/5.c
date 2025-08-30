#include <stdio.h>

enum DiaSemana { LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO };

int main() {
    const char* nombresDias[] = { "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo" };

    printf("Los dias de la semana son:\n");
    for (int i = LUNES; i <= DOMINGO; i++) {
        printf("%d -> %s\n", i, nombresDias[i]);
    }

    return 0;
}
