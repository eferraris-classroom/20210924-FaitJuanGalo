#ifndef INC_20210924_FAITJUANGALO_FUNCIONES_H
#define INC_20210924_FAITJUANGALO_FUNCIONES_H

typedef struct leaf{
    int value;

    struct leaf * izq;
    struct leaf * der;

}Hoja;

Hoja * newLeaf(int);
void insertLeaf(Hoja **, Hoja *);

void inorden(Hoja *);
void posorden(Hoja *);
void preorden(Hoja *);

#endif //INC_20210924_FAITJUANGALO_FUNCIONES_H
