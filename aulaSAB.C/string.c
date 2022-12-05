#include <stdio.h>
#include<string.h>

int main ()
{
    char nome[30];
    int c;

    printf("Informe seu nome: ");
    scanf("%[^\n]", nome);

        int d = strlen(nome) - 1;

            for(c = 0; c <= strlen(nome)- 1; c++)
            {
                if(nome[c] != nome[d])
                    break;
                    d--;
            }

    if(c != strelen(nome))
    {
        printf("Nao eh palindromo");
    }
    else
    {
        printf("E palindromo");
    }
    fflush(stdin);
    getchar();

    return 0;
}   