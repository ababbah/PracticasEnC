#include<stdio.h>
#include<string.h>

void cargaNombre(char [][50], int [], int);
void muestraAlumno(char [][50], int [], int);
int buscarNombre(char [][50], int , char[]);
int buscar (int [], int, int);


int main()
{
    int dni [50]= {0};
    char nombre [20][50];
    cargaAlumno(nombre,dni,50);
    muestraAlumno(nombre,dni,50);


    return 0;
}

/////////////
void cargaAlumno(char nombre[][50],int dni [],int ce)
{
    int i=0,ban=0;
    do
    {
        printf("ingrese el nombre del alumno: ");
        fgets(nombre[i],20,stdin);
        printf("\n ahora ingrese el DNI");
        scanf("%d",&dni[i]);
        i++;
    }while(i>ce || (stricmpi(nombre[i],"FIN"))==0);

}
////////////////
void muestraAlumno(char nombre[][50], int dni, int ce)
{

    printf("ingrese el nombre del alumno: ");

}
