#include <stdio.h>



int recur(int num,int resultado);

int recur(int num,int resultado);
{

    if(num <= -(1))
    {
        return;
    }
    else
    {

        num = recur(num--);
    }
    printf("%d", num);
    return;
}

int main ()
{
    int numero, result = 0;

        printf("Entre com um valor: ");
        scanf("%d", numero);

         result = recur(numero);


        
    return 0;
}