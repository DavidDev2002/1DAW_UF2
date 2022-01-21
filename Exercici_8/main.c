#include <stdio.h>
#include "functions.h"

void main() {
	int x,y,p;
	x=validar_nat("Introduce la base de la potencia:  ");
	y=validar_nat("Introduce el exponente de la potencia:  ");
	p=potencia(x,y);
	printf("El resultado de la potencia es: [%d]",p);
}
