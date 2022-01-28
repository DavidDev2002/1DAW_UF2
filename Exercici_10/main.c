#include <stdio.h>
#include "functions.h"

void main() {
    int size;
    size = validate();
    struct libro book[size];
    modifyData(book, size);//per referència només l’array, no size
    printData(book, size);
}

