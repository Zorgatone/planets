#include <stdio.h>
#include <stdlib.h>

#include "planet/planet.h"

int main(int argc, char **argv) {
    puts("Hello, World!");

    planet_t p = newPlanet("test", 91934445, 0);
    puts(p.name);
    freePlanet(p);

    return EXIT_SUCCESS;
}
