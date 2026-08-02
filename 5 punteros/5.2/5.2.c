#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num1 , num2;
    int *p1, *p2;
    num1=10;
    num2 =20;
    p1=&num1;
    p2=&num2;
    printf("el resultado de la suma de ambos numeros es %d",*p1+*p2);

    return 0;
}
