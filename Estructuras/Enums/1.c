#include <stdio.h>

enum DiaSemana { LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO };

int main() {
    const char* nombresDias[] = { "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo" };

    enum DiaSemana hoy = MIERCOLES;

    printf("El dia con valor %d es: %s\n", hoy, nombresDias[hoy]);

    return 0;
}
