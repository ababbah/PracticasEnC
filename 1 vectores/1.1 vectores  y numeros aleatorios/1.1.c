#include<stdio.h>
#include<time.h>

#define TAM 20
void cargaVec(int[],int);
void muestraVec(int[],int);
int maximo(int[],int);
int minimo(int [],int);
void muestraMaximo(int [], int, int);
void muestraMinimo(int[],int,int);


int main()
{
    int vect[20], max, min;
    srand(time(NULL));
    cargaVec(vect,TAM);
    max= maximo(vect,TAM);
    min=minimo(vect,TAM);
    muestraMinimo(vect,TAM,min);
    muestraMaximo(vect,TAM,max);
    muestraVec(vect,TAM);


    return 0;
}

void cargaVec(int v[],int ce)
{
    int i;
    for(i=0;i<ce;i++)
    {
        v[i]=rand()%1000;
    }
}
void muestraVec(int v[],int ce)
{
    int i;
    printf("\n numero posicion");
    for (i=0;i<ce;i++)
    {

        printf("\n %d \t %d", v[i],i+1);

    }
}
int maximo(int v[],int ce)
{
    int i, max=v[0];

    for(i=1;i<ce;i++)
    {
        if(v[i]>max)
            max=v[i];
    }
    return max;
}

int minimo(int v[],int ce)
{
    int i, min=v[0];

    for(i=1;i<ce;i++)
    {
        if(v[i]<min)
            min=v[i];
    }
    return min;
}
void muestraMaximo(int v[],int ce,int max)
{
    int i;
    for(i=0;i<ce;i++)
    {
        if(max==v[i])
            printf("\n valor mixmimo es %d y esta en posicion %d",max,i+1);
    }
}
void muestraMinimo( int v[],int ce,int min)
{
    int i,cont=0;
    for(i=0;i<ce;i++)
        if(min== v[i])
        cont++;
    printf("el minimo es %d y se repite %d veces",min,cont);
}
