#include <stdio.h>
#include "funciones.h"

int main() {
    Hoja * Ruth = NULL;

    insertLeaf(&Ruth, newLeaf(8));
    insertLeaf(&Ruth, newLeaf(4));
    insertLeaf(&Ruth, newLeaf(10));
    insertLeaf(&Ruth, newLeaf(2));

    printf("Preorden: ");
    preorden(Ruth);
    printf("\n");

    printf("Inorden: ");
    inorden(Ruth);
    printf("\n");

    printf("Posorden: ");
    posorden(Ruth);
    printf("\n");
    return 0;
}
