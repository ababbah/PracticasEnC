#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    int num;
    float dec;
    char letra;
}stdato;

void cargaDato(stdato *p);
void muestraDato(stdato *p);

int main()
{
    stdato dat;
    cargaDato(&dat);
    muestraDato(&dat);
    return 0;
}

void cargaDato(stdato *p)
{
    printf("ingrese un entero");
    scanf("%d",&p->num);
    printf("ingrese un real");
    scanf("%f",&p->dec);
    printf("ingrese un caracter ");
    fflush(stdin);
    scanf("%c",&p->letra);
}

void muestraDato(stdato *p)
{
    printf("\n el numero es %d", p->num);
    printf("\n el float es %f",p->dec);
    printf("\n el caracter es %c", p->letra);
}
