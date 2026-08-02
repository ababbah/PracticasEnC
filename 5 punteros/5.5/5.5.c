#include<stdio.h>
#include<stdlib.h>

void cargaV(int [], int);
void muestraV(int [], int );

int main()
{
    int vec[10];
    cargaV(vec,10);
    muestraV(vec,10);

    return 0;
}

void cargaV(int v[], int ce)
{
    int i;
    for(i=0;i<ce;i++)
    {
        printf("ingrese un numero : ");
        scanf("%d",v+i);
    }
}
void muestraV(int *v , int ce)
{
    int i;
    for(i=0;i<ce;i++)
    {
        printf("\n el numero en posicion %d es %d",i,*(v+i));
    }
}
