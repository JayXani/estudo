#include <stdio.h>
#include <conio.h>

int fat(int n1);  //prototipo da fun��o deve ser declarada antes da fun��o principal


int main(void)
{
	int numero = 0;
	int resultado = 0;

		printf("Informe um numero, para exibir o fatorial:  ");
		scanf("%d", &numero);
			
			resultado = fat(numero);  //Chamda da fun��o, passando os valores para a fun��o
	
				printf("O fatorial eh: %d\n",resultado);

    return 0;
}


int fat(int n1) //Fun��o recursiva � um loop e minha condi��o de parada foi quando n for igual a 1 e da� vai ser retornado para a main
{
	double result = 0;

	if (n1 <= 1)
	{
		
		return(1);  //Retorno DIRETO para main, caso n seja menor ou igual a 1
	}
	else
	{
		
		result = (n1 * fat(n1-1));
		
	}
	
	return (result);
}

