#include <stdio.h>
#include <conio.h>

int fat(int n1);  //prototipo da função deve ser declarada antes da função principal


int main(void)
{
	int numero = 0;
	int resultado = 0;

		printf("Informe um numero, para exibir o fatorial:  ");
		scanf("%d", &numero);
			
			resultado = fat(numero);  //Chamda da função, passando os valores para a função
	
				printf("O fatorial eh: %d\n",resultado);

    return 0;
}


int fat(int n1) //Função recursiva é um loop e minha condição de parada foi quando n for igual a 1 e daí vai ser retornado para a main
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

