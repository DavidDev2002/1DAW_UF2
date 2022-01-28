/*
 * functions.c
 *
 *  Created on: 17 dic 2021
 *      Author: david
 */

#include "functions.h"
#include <stdio.h>

void modifyData(struct libro *o,int size){

		for(int i=0; i<size;i++){
        printf("Introdueix el nom del llibre: \n");
        scanf("%s",o[i].titulo);
        printf("Introdueix l'autor del llibre: \n");
        scanf("%s",o[i].autor);
        printf("Introdueix la editorial del llibre: \n");
        scanf("%s",o[i].editorial);
        printf("Introdueix el dia de publicació del llibre: \n");
        scanf("%d",&o[i].dia_p);
        printf("Introdueix el més de publicació del llibre: \n");
        scanf("%d",&o[i].mes_p);
        printf("Introdueix l'any de publicació del llibre: \n");
        scanf("%d",&o[i].any_p);
        printf("Introdueix el total d'unitats del mateix llibre:  \n");
        scanf("%d",&o[i].unitats);
        printf("Introdueix quin usuari ha agafat el llibre:  \n");
        scanf("%s",o[i].usuari);
        printf("Introdueix el total de dies que dura el prèstec:  \n");
        scanf("%d",&o[i].prestec);
    }
}

void printData(struct libro *o, int size){
    printf("------------------------------------------------\n");
    printf("Nom----Autor----Editorial----Data----Unitats----Usuari----Prestec\n");
    for(int i=0; i<size; i++){
        printf("%s		",o[i].titulo);
        printf("%s		",o[i].autor);
        printf("%s		",o[i].editorial);
        printf("%d/%d/%d		",o[i].dia_p,o[i].mes_p,o[i].any_p);
        printf("%d		",o[i].unitats);
        printf("%s		",o[i].usuari);
        printf("%d		",o[i].prestec);
        printf("\n");
    }
}

int validate(){
    int num;
    do{
        printf("Quants registres vols introduir?\n");
        scanf("%d", &num);
    }while(num<1);
    return num;
}





