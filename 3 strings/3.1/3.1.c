#include<stdio.h>
#include<string.h>

int cuentaPalabra(char [], int);

int main()
{
    char frase [501];
    int palabra=0;
    printf("ingrese la frase tiene un maximo de 500 caracteres disponibles :\n");
    fgets(frase,501,stdin);
    palabra=cuentaPalabra(frase,501);
    printf("\n la cantidad de palabras contadas son %d",palabra);

    return 0;
}
///////////////
int cuentaPalabra(char cadena[], int ce)
{
    int cont=0, i=0;
    int ban=0;
    while(cadena[i]!='\0' && i<ce)
    {
        if(cadena[i] !=' ' && cadena[i] != '\n')
        {
            if(ban ==0)
            {
                cont++;
                ban =1;
            }
        }
        else
        {
            ban=0;
        }
    i++;
    }

    return cont;
}
