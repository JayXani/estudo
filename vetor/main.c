#include <stdio.h>
#include <math.h>

int fat(int n);

	int fat(int n)
	{
		double result;

		if(n <= 1)
		{

			return(1);
		}
		else
		{ 

			result = (n = fat*(n-1));
			
		}

		return(result);
	}

int main(int argc, char *argv[])
{
	int opc;
	int i =1;

	char menu[] = "Menu \n\n 1- Maior/Menor   \n 2- Média   \n 3- Fibonacci   \n 4- Fatorial   \n 5- Sair \n" ;

while(i)
{
	printf("%s\n", menu);

	scanf("%d",&opc);
		
	switch(opc)
	{
		case 1:

			maiorMenor();

		break;

		case 2:

			media();

		break;

		case 3:

			fibo();

		break;

		case 4:

			fatorial();

		break;

		case 5:

			printf("Saindo do sistema");
			i = 0;

		break;
	}
}
 	
    return 0;
}

int maiorMenor(){
	int contador, vetor[5], *valor, maior,menor;  //*valor vai guardar o valor dela no mesmo endereço do VETOR e não o conteudo da posição do vetor

		valor = vetor; 

	for(contador = 0; contador < 5; contador++)
	{

		printf("\nDigite os valores equivalente a posicao %d: ", contador);

			scanf("%d",valor);  //valor já é endereço por isso eu coloco somente o valor sem &

				valor++; //Valor vale 1, acrescendo + 1, ele vai pulando de posicao, eu atualizo o endereço de memoria MAS NÃO O CONTEUDO, scanf que vai atualizar o meu conteudo


	}	

		valor = vetor; //Voltando para a posição 0 do vetor

		for(contador = 0;contador < 5; contador++)
		{

				printf("%d\n",*valor);

				if(contador == 0) //Aqui é somente para rodar a primeira vez, ou seja, o primeiro valor que o usuario digitar vai ser ao mesmo tempo o maior e o menor
				{	
					maior = *valor;   
					menor = *valor;		
				}						

					if(*valor > maior) //Exemplo *valor = 2, digamos que enquanto contador foi igual a 0 eu atribui para maior e menor o numero 1

					{				  // O if vai verificar, *valor = 2, é maior que a variavel maior, que é igual a 1, como não é, ela vai atribuir 2 para maior
					 // e a variavel menor vai continuar com o valor 1 até que na próxima chamada o valor que o usuario colocar seja menor que 1

						maior = *valor;
					}

						if(*valor < menor)
						{
							menor = *valor;
						}

				valor++; //Aqui é para percorrer o *valor e exibir o conteudo de valor, sem o *, ele vai exibir o endereço

		}
			printf("O maior eh: %d\n", maior);     //Lembrando que o printf tem que ser fora do loop, senão os valores vão ser exibidos a toda hora no for
			printf("O menor eh: %d\n", menor);  
		
	return 0;
}

int media()
{

	
	return 0;
}

int fibo()
{
	int ant = 1, atual = 1, prox, contador, termo;

	printf("\nInforme o termo que deseja: ");
	scanf("%d",&termo);
	printf("%d",ant);
	
		
	if(termo > 1) //Para printar o 2 termo caso haja alguma necessidade,ou seja, somente para mostrar a ordem, exemplo, se ele digitar 1, o resultado vai aparecer "1 1"
	{
		
		printf("%d", atual);  

	}
		for(contador = 0; contador < termo - 2; contador++) //Coloco -2 porque eu já coloquei os valores anteriores
		{

			prox = ant + atual;      //prox = 1 + 1, PROX agr tem 2
			printf("%d",prox);      //prox = 2, exibe 2
		
			ant = atual;		  //ant = 1
			atual = prox;		 //atual = 2

		}

	printf("\n O valor escolhido foi: %d \n\n", atual); 
	
	return 0;
}

int fatorial()
{	
	int numero, resultado = 0;

		printf("Informe um numero para calcular o fatorial");
		scanf("%d", &numero);

		resultado = fat(numero);

	printf("O fatorial eh: %d", resultado);
				

	return 0;
}
