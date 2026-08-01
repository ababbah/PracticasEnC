#include<stdio.h>
#include<time.h>
#define TAM 10

void cargaAleatoria(int [],int,int);
void mostrar (int [],int);


int main ()
{
    int vect[TAM];
    srand(time(NULL));
    cargaAleatoria (vect,TAM,100);
    mostrar(vect,TAM);

    return 0;

}


void cargaAleatoria (int v[],int ce,int max)
{
    int i;
    for (i=0;i<ce;i++)
    {
        v[i]=rand()%max;
    }
}

void mostrar(int v[], int ce)
{
    int i;
    for(i=0;i<ce;i++)
    {
        printf("%d \n",v[i]);
    }
}
