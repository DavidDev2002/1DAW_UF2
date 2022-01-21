#include <stdio.h>
#include "functions.h"

void main() {
	int size, input, total = 0, media, max = 0, min = 10;
	size = tamano();
	int array[size];
	for (int i = 0; i < size; i++) {
		array[i] = valor10();
		total += array[i];
		if (array[i] > max) {
			max = array[i];
		}
		;
		if (array[i] < min) {
			min = array[i];
		};
	}
	for (int j = 0; j < size; j++) {
		printf("[%d]", array[j]);
	}
	printf("\n");
	mitjana(total, size);
	printf("\nEl valor mas grande del array és: %d", max);
	printf("\nEl valor mas pequeño del array és: %d", min);
}
