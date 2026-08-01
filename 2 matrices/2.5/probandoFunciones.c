#include<stdio.h>
#include<stdlib.h>
#include <windows.h>

//////////
void color(int n)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
}

///////////
void cargaMat(char [][9],int ,int);
void muestraMatriz(char [][9], int, int);

int main()
{
    char matriz[15][9];
    int num;
    printf("\a esta es una prueba ingrese un numero ");
    scanf("%d",&num);
    system("color 0A");
    cargaMat(matriz,15,9);
    muestraMatriz(matriz,15,9);
    return 0;
}

///////////////////

void cargaMat(char m[][9], int cf, int cc)
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
