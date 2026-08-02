#include<stdio.h>
#include<stdlib.h>

int calculaImporte(float* , int);

int main()
{
    float importe;
    int cantidad,porcDesc;
    printf("ingrese el precio unitario");
    scanf("%f",&importe);
    printf("ingrese la cantidad vendida");
    scanf("%d",&cantidad);
    porcDesc = calculaImporte(&importe,cantidad);
    if (porcDesc>0)
        printf("\n Se aplico un descuento del %d %",porcDesc);
    printf("\n total a pagar %.2f", importe);

    return 0;
}
int calculaImporte(float *imp, int cant)
{
    int desc=0;
    if(cant > 100)
        desc =30;
    else
        if(cant>50)
            desc =20;
        else
            if(cant >30)
                desc =10;
    *imp *= cant;
    *imp -= ((*imp) * desc)/ 100;
    return desc;

}
