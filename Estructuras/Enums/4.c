#include <stdio.h>

enum Dificultad { FACIL=1, MEDIO, DIFICIL, EXTREMO };

int main() {
    const char* nombres[] = { "", "Facil", "Medio", "Dificil", "Extremo" };

    enum Dificultad nivel = DIFICIL;

    printf("El nivel seleccionado es: %s\n", nombres[nivel]);

    return 0;
}
