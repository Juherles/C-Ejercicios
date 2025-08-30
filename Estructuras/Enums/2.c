#include <stdio.h>

enum Mes { ENERO=1, FEBRERO, MARZO, ABRIL, MAYO, JUNIO, JULIO, AGOSTO, SEPTIEMBRE, OCTUBRE, NOVIEMBRE, DICIEMBRE };

int main() {
    const char* nombresMeses[] = {
        "", "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
        "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"
    };

    int numero = 8; // Ejemplo: agosto
    printf("El mes %d es: %s\n", numero, nombresMeses[numero]);

    return 0;
}
