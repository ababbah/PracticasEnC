#include<stdio.h>
#include<time.h>

void cargaAleatoria(int[],int,int);
void mostrar (int[],int);
int main()
{
    int vec[5];
    srand(time(NULL));
    cargaAleatoria(vec,5,5);
    mostrar(vec,5);
    return 0;
}
/////////////
void cargaAleatoria(int v[],int ce,int max )
{
    int i,aux,pos;
    for(i=0;i<ce;i++)
    {
        do
        {
            aux=rand()%max+1;
            pos= buscar(v,i,aux);
        }while(pos!=-1);
        v[i]=aux;
    }
}
////////////
void mostrar(int v[],int ce)
{
    int i;
    for(i=0;i<ce;i++)
        printf("%d\n",v[i]);
}
//////////////
int buscar(int v[],int ce, int dato)
{
    int i=0, pos=-1;
    while (pos==-1 && i<ce)
    {
        if(v[i]==dato)
            pos=i;
        else
            i++;

    }
    return pos;
}




