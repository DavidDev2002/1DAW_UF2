/*
 * functions.h
 *
 *  Created on: 17 dic 2021
 *      Author: david
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#define PI 3.1416

struct address{
    char street[100];
    char city[50];
    char state[20];
    char postalCode[5];
};

struct fecha{
	int dia;
	int mes;
	int any;
};

struct office{
    int id;
    char name[50];
    char cto[50];
    int workers;
    struct address addr;
    struct fecha data;
};

#endif /* FUNCTIONS_H_ */

int sumar(int, int);
int validar_nat(char *);
int reednum(char * );
float longitud();
int validarvar(int);
int validarex1();
int conversor();
void notas();
int validar10(int);
void mitjana(int x, int y);
int tamano(char *msg);
int valor10();
int potencia(int x, int y);
int validate();
void modifyData(struct office *, int);
void printData(struct office *, int);


