#include<stdio.h>
#include<string.h>


int main()
{
    char nombre [21];
    char apellido [21];
    char completo [50]= " ";
    printf("ingrese su nombre: \n");
    fgets(nombre,20,stdin);
    printf("ingrese su apellido: \n");
    fgets(apellido,20,stdin);
    strcat(completo,nombre);
    strcat(completo,",");
    strcat(completo," ");
    strcat(completo, apellido);
    system ("cls");

    printf("\n el nombre completo del usuario es %s",completo);

    return 0;
}
