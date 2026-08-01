#include<stdio.h>

int buscar(int[],int,int);
void cargaSinDuplicado(int [],int);
int main()
{

    return 0;
}

int buscar(int v[],int ce, int dato)
{
    int i=0, pos=-1;
    while(pos==-1 && i<ce)
    {
        if(v[i]==dato)
            pos=i;
        else
            i++;
    }
    return pos;
}

void cargaSinDuplicado(int v[],int ce)
{
    int i, pos, aux;
    for(i=0;i<ce;i++)
    {
        do
        {
            printf("ingrese un numero:");
            scanf("%d",aux);
            pos= buscar(v,i,aux);
            if(pos!=-1)
                printf("Dato duplicado ingrese otro \n");

        }while(pos!=-1);
        v[i]= aux;
    }
}



