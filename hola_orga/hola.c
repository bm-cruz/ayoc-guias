#include <stdio.h>

int main() {
    printf("Hola Orga!\n");
    return 0;
}

/*
para compilar con flags hacemos en una terminal en el directorio de hola_orga:
    gcc -Wall -Wextra -pedantic -c hola.c -o hola.o
    gcc -Wall -Wextra -pedantic hola.o -o hola
*/