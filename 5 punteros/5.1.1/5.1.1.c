#include<stdio.h>
#include<stdlib.h>

int main()
{
     int num, *p;
     num =10;
     p= &num;
     printf("\n la direccion de la variable es : %p",num);
     printf("\n la direccion del puntero es : %p",*p);
     printf("\n el contenido de la variable es : %d",num);
     printf("\n el contenido de la variable mediante el puntero es : %d",*p);
     printf(" \n el contenido del puntero con amperssan es %p",&p);
     printf(" \n el contenido del puntero es sin ampersan %p",p);

    return 0;
}
