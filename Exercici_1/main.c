#include <stdio.h>
#include "functions.h"

void main() {
	int num1;
	do{
	num1 = validarex1();
	}while(num1 == -1);
	printf("%d",num1);
}
