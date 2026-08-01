#include<stdio.h>

#define TAM 4

void ingresaCodigo(int[],int); // cargaSinDuplicado
int buscar(int [],int, int);         // v ce, dato
void muestraListar(int [],int[],int);
void cargaProducto(int [], int [],int);
int minimo(int [],int);
int maximo(int [],int);
void muestraIgualA(int [],int [],int, int);



int main()
{
    int codigos[TAM], productos[TAM]={0},mini,maxi;

    ingresaCodigo(codigos,TAM);
    cargaProducto(codigos,productos,TAM);
    printf("\n Codigos \t Productos");
    muestraListar(codigos,productos,TAM);
    mini=minimo(productos,TAM);
    maxi=maximo(productos,TAM);
    printf(" \n El / los productos del cual se solicitaron menos cantidad de unidades.");
    muestraIgualA(codigos,productos,TAM,mini);
    printf("\n  El / los productos del cual se solicitaron mayor cantidad de unidades");
    muestraIgualA(codigos,productos,TAM,maxi);
    return 0;
}
////////////////////
void ingresaCodigo(int v[],int ce)
{
    int i, pos, aux;
    for(i=0;i<ce;i++)
    {
        do
        {
            printf("ingrese un numero:");
            scanf("%d",&aux);
            pos= buscar(v,i,aux);
            if(pos!=-1)
                printf("codigo duplicado ingrese otro \n");

        }while(pos!=-1);
        v[i]= aux;
    }
}

////////////////////////
void cargaProducto(int v1 [], int v2 [],int ce)
{
    int pos, aux;

    do{
        printf("\n ingrese el codigo \t");
        scanf("%d",&aux);
        pos=buscar(v1,ce,aux);
        if(pos==-1)
        {
            if(aux==0)
            {
                printf("\n FIN DE LA CARGA ");
                system("pause");
                system("cls");
            }
            else
                printf("\n codigo incorrecto, ingrese uno valido \t");
        }
        else
        {
            printf("\n ingrese la cantidad :\t");
            scanf("%d",&aux);
        }
        v2[pos]+=aux;
    }while(aux!=0 || (aux<1000 && aux>9999));
}
////////////////
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
void muestraListar(int v1[], int v2[] , int ce)
{
    int i;
    for(i=0;i<ce;i++)
    {
        printf("\n %d \t\t\t %d",v1[i],v2[i]);
    }

}
/////////////////////
int minimo(int v[], int ce)
{
    int i,min;
    min =v[0];
    for(i=1;i<ce;i++)
    {
        if(v[i]<min )
            min=v[i];
    }
    return min;
}/////////////////////
int maximo(int v[], int ce)
{
    int i,max;
    max =v[0];
    for(i=1;i<ce;i++)
    {
        if(v[i]>max)
            max=v[i];
    }
    return max;
}
void muestraIgualA(int v1[],int v2[],int ce, int dato)
{
    int i;
    for(i=0;i<ce;i++)
    {
        if(v2[i]==dato)
            printf("\n codigo %d \t cantidad %d",v1[i],v2[i]);
    }
}
