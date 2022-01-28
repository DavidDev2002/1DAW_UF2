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
    for(int i=0; i<size; i++){
        printf("Aquestes són les dades del llibre: [%d]\n", i+1);
        printf("Nom del llibre: %s\n",o[i].titulo);
        printf("Nom del autor del llibre: %s\n",o[i].autor);
        printf("Editorial del llibre: %s\n",o[i].editorial);
        printf("Data de publicació del llibre: %d/%d/%d\n",o[i].dia_p,o[i].mes_p,o[i].any_p);
        printf("Unitats totals del llibre: %d\n",o[i].unitats);
        printf("Usuari que ha encarregat el llibre: %s\n",o[i].usuari);
        printf("Dies per poder tornar el llibre: %d\n",o[i].prestec);
        printf("------------------------------------------------\n");
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



