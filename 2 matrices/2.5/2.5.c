#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

//////////
void color(int n)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
}


void iniciaMat(char [][9], int , int);
void cargaMat(char [][9], int[] , int, int);
void sumaPorColumna(char [][9], int [],int, int);
void muestraMatriz(char [][9], int , int);
int validaRan(int,int);
void sumaMatriz (char [][9],int[] ,int,int );
void sumaPorFila(char [][9], int [],int, int);
int sumaVector(int [],int);
int mayor(int [],int);
void muestraDato(int[],int ,int);
void listaButaca(int[],int [],int);
void ordenSeleccion(int [],int );
int posMaximo(int [],int, int);

int main()
{
    char sala[15][9];
    int posButaca[9]={8,6,4,2,1,3,5,7,9};
    int filas [15]={0};
    int acumButaca[9]={0};
    int fila,butaca, acumulado=0;
    iniciaMat(sala,15,9);
    muestraMatriz(sala,15,9);
    cargaMat(sala,posButaca,15,9);
    sumaPorColumna(sala,acumButaca,15,9);
    sumaPorFila(sala,filas,15,9);
    acumulado =sumaVector(filas,15);
    printf("\n la cantidad de asientos disponibles son %d ",(9*15)-acumulado);
    printf("\n la cantidad de asientos reservados son %d",acumulado);
    printf("\n los numeros de filas que quedaron vacias son:");
    muestraDato(filas,15,0);
    printf("la o las filas con mayor cantidad de expectadores son: ");
    muestraDato(filas,15,mayor(filas,15));
    printf("Butaca" "Cantidad");
    ordenSeleccion(acumButaca,9);

    listaButaca(acumButaca,posButaca,9);


    return 0;
}
/////////////////////
int posMaximo(int v[],int ini, int ce)
{
    int i, posMax;
    posMax= ini;
    for (i=ini+1;i<ce;i++)
    {
        if (v[i>v[posMax])
            posMax=i;
    }
    return posMax;
}
/////////////////////
void ordenSeleccion(int v[],int ce)
{
    int i, pmax, aux;
    for(i=0;i<ce-1;i++)
    {
        pmax = posMaximo(v,i,ce);
        if(pmax !=i)
        {
            aux = v[i];
            v[i]=v[pmax];
            v[pmax]= aux;
        }
    }
}

/////////////////////
void listaButaca(int v1 ,int v2,int ce)
{
    int i,aux ;
    for(i=0;i<ce;i++)
    {
       aux=buscar(v1,ce,v1[i])
        printf( "\n%d"  "%d",v2[aux],v1[i] );
    }

}
/////////////////////
void muestraDato(int v, int ce, int dato)
{
    int i;
    for(i=0;i<ce;i++)
    {
        if(v[i]== dato)
            printf("\n %d ")
    }
}
/////////////////////
int mayor(int v,int ce)
{
    int i,max;
    max=v[0];
    for(i=1;i<ce;i++)
    {
        if(v[i]>max)
            max=v[i];
    }
    return max;
}

/////////////////////
int sumaVector(int v, int ce)
{
    i,Cant=0;
    for(i=0;i<ce;i++)
    {
        cant+=v[i];
    }
    return cant ;
}


/////////////////////
void iniciaMat(char m[][9], int cf, int cc)
{
    int c,f;
    for(f=0;f<cf;f++)
    {
        for(c=0;c<cc;c++)

            m[f][c]= 'D';
    }
}
////////////////////////
void muestraMatriz(char m[][9], int cf,int cc)
{
    int f,c;
    system("cls");
    for(f=0;f<cf;f++)
    {
        for(c=0;c<cc;c++)
        {
            if(m[f][c]=='D')
            {
                color(2);
                printf("%c",m[f][c]);
                printf("\t ");
                color(7);
            }
            else
            {
                color(4);
                printf("%c",m[f][c]);
                printf("\t ");
                color(7);
            }
        }
        printf("\n");
    }

}
///////////////
void cargaMat(char sala[][9],int v[], int cf, int cc)
{
    int fila,butaca;

    do
        {
        printf("\n ingrese la fila : ");
        fila=validaRan(0,12);
        printf("\n ingrese la butaca : ");
        butaca=buscar(v,9,validaRan(1,9));
        if(sala[fila-1][butaca]=='D')
        {
            sala[fila-1][butaca]='R';
        }
        else
        {
            printf("BUTACA RESERVADA intente de nuevo");
            printf("\n ingrese la fila : ");
            fila=validaRan(0,15);
            printf("\n ingrese la butaca : ");
            butaca=buscar(v,9,validaRan(1,9));
        }
        system("cls");
        muestraMatriz(sala,15,9);


    }while(fila >= 0);
}
/////////////////
int validaRan(int li,int ls)
{
    int ban=0;
    int dato;
    do{
        if(ban==0)
        {
            scanf("%d",&dato);
            ban=1;
        }
        else
        {
            printf("dato no valido, intente de nuevo: ");
            scanf("%d",&dato);
        }
        }while(dato<li || dato>ls);

    return dato;
}
//////////
void sumaPorColumna(char mat[][9],int v[],int cf,int cc)
{
    int f,c,suma;
    for(c=0;c<cc;c++)
    {
        suma=0;
        for(f=0;f<cf;f++)
        {
            if(mat[f][c]== 'R')
            {
                suma++;
            }
        }
        v[c]=suma;
    }
}
//////////
void sumaPorFila(char mat[][9],int v[],int cf,int cc)
{
    int f,c,suma;
    for(f=0;f<cf;f++)
    {
        suma=0;
        for(c=0;c<cc;c++)
        {
            if(mat[f][c]== 'R')
            {
                suma++;
            }
        }
        v[f]=suma;
    }
}
///////////////////
int buscar(int v, int ce,int dato)
{
    int i=0;
    int pos;
    while(i<ce)
    {
        if(v[i]== dato )
            pos=i;
        i++;
    }
    return pos;
}
