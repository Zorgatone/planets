#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "planet.h"

planet_t newPlanet(char *name, unsigned long radius, unsigned population) {
	assert(name != NULL);
	assert(radius > 0);

	planet_t planet = {
		.name = malloc(strlen(name) + 1),
		.radius = radius,
		.population = population
	};

	strcpy(planet.name, name);

	return planet;
}

void freePlanet(planet_t planet) {
	free(planet.name);
}
