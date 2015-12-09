#ifndef PLANET_H
#define PLANET_H

typedef struct planet {
	char *name;
	unsigned long radius;
	unsigned population;
} planet_t;

planet_t newPlanet(char *name, unsigned long radius, unsigned population);
void freePlanet(planet_t planet);

#endif
