#include<stdio.h>
#include<string.h>

void leerTexto(char [],int );
int main ()
{
    char cadena [21];
    char copia [21];
    printf ("Ingrese una cadena de no más de 20 caracteres \n");
    getchar();
    leerTexto(cadena,21);
    printf ("La cadena ingresada contiene: %d caracteres", strlen(cadena) );

    return 0;
}
////////////////
void leerTexto(char texto[], int ce)
{
    int i;
    fgets (texto,ce,stdin);
    i=0;
    while(texto[i]!= '\0')
    {
        if(texto[i]== '\n' )
            texto[i]= '\0';
        else
            i++;
    }
}
