#include<stdio.h>
#include<time.h>

#define tam 10

void carga(int [],int);
int maximo(int[],int);
void muestraMaximo(int [],int,int);

int main()
{
    int vect[tam], max;
    carga(vect,tam);
    max=maximo(vect,tam);
    muestraMaximo(vect,max,tam);
    return 0;
}

void carga(int v[],int ce)
{
    int i;
    for(i=0;i<ce;i++)
    {
        printf("ingrese numero (%d): ",i+1);
        scanf("%d",&v[i]);
    }

}


int maximo(int v[],int ce )
{
    int i, max;
    max=v[0];
    for(i=0;i<ce;i++)
    {
        if( v[i]>= max )
        {
            max=v[i];
        }
    }
    return max;
}

void muestraMaximo(int v[],int max, int ce)
{
    int i,cont=0;
    for (i=0;i<ce;i++)
    {
        if (v[i]== max)
        {
            cont++;
        }

    }
    printf("el numero maximo es %d y se repite %d veces", max, cont);

}

