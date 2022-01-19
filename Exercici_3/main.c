#include <stdio.h>
#include "functions.h"

void main() {
	int num,bin;
	num = validar_nat("Introduce un numero natural: ");
	bin = binary(num);
	printf("El numero en binario és: %d",bin);
}
