#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct
{
    int codigo;
    float precio;
    int stock;
    char info [50];
}stmed;

void busqueda_medi(stmed [], int );
float ingreso(stmed[], int);
void informe(stmed [],int);
int validaRan(int , int);
int esMayor(int);
float mayorA (int);

int main()
{
    stmed medi [ 50];
    ingreso(medi,50,);
    busqueda_medi(medi,50);
    informe(medi,50);


    return 0;
}
////////////

