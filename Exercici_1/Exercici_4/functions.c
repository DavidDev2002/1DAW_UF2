/*
 * functions.c
 *
 *  Created on: 17 dic 2021
 *      Author: david
 */

#include "functions.h"
#define TEXTO1 "Aquest es el total d'aprobats i la seva mitjana: %d -- %d%\n"
#define TEXTO2 "Aquest es el total de suspesos i la seva mitjana: %d -- %d%\n"

int sumar(int num1, int num2) {
	return num1 + num2;
}

int validar_nat(char *msg) {
	int num;
	do {
		printf("%s", msg);
		scanf("%d", &num);
	} while (num < 1);
	return num;
}

int readnum(char *msg) {
	int num;
	printf("%s", msg);
	scanf("%d", &num);
	return num;
}

float longitud() {
	float radio;
	do {
		printf("Introduce el radio de un circulo: ");
		scanf("%f", &radio);
	} while (radio < 1);
	return 2 * PI * radio;
}

int validarvar(int var) {
	int num;
	do {
		printf(
				"Introdueix un nombre més gran que el numero introducido anteriormente:");
		scanf("%d", &num);
	} while (num < var);
	return num;
}

int validarex1() {
	int i = 0, num;
	do {
		printf("Introduce un numero entre 10 y 5000: \n");
		scanf("%d", &num);
		i++;
	} while ((num < 10 || num > 5000) && i < 3);
	if (num > 10 && num < 5000) {
		return num;
	} else {
		return -1;
	}
}

int conversor() {
	int s, h, m, segundos;
	printf("Introduce el total de segundos: \n");
	scanf("%d", &segundos);
	s = segundos;
	s = s % 60;
	h = segundos / 3600;
	m = segundos / 60;
	printf("Segons: %d", s);
	printf("\nMinuts: %d", m);
	printf("\nHores: %d", h);
	return s, h, m;
}

int binary(int num) {
	int count = 1, rem = 1, bin = 0;
	while (num != 0) {
		rem = num % 2;
		num = num / 2;
		bin = bin + rem * count;
		count = count * 10;
	}
	return bin;
}
void notas() {
	int size = 15, total_a = 0, total_s = 0, i = 0, input;
	for (i = 0; i < size; i++) {
		input = validar10(i);
		if (input < 5) {
			total_s++;
		} else {
			total_a++;
		}
	}
	mitjana(total_a,total_s);

}

int validar10(int i) {
	int x;
	do {
		printf("Introduce la %d nota: ", i + 1);
		scanf("%d", &x);
	} while (x < 0 || x > 11);
	return x;
}
void mitjana(int x ,int y) {

	printf(TEXTO1,x,x * 100 / 15);
	printf(TEXTO2,y,y * 100 / 15);
}
