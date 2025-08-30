#include <stdio.h>

enum Semaforo { ROJO, AMARILLO, VERDE };

int main() {
    enum Semaforo luz = VERDE;

    if (luz == ROJO) {
        printf("Alto, luz roja.\n");
    } else if (luz == AMARILLO) {
        printf("Precaucion, luz amarilla.\n");
    } else if (luz == VERDE) {
        printf("Avance, luz verde.\n");
    }

    return 0;
}
