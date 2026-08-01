#include <stdio.h>


int main()
{
    char nombre[20];
    printf ("Ingrese un nombre: ");
    fgets(nombre,20,stdin);
    printf ("El nombre ingresado es: %s", nombre);
    puts(nombre);
    return 0;
}
12 21 23
