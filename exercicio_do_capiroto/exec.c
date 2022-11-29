#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int opc;
	int i = 1;

	char menu[] = "\nMenu \n\n (1) Media fatec   \n (2) Ajuste de preco    \n (3) Fibonacci(FOR)   \n (4) Fatorial(FOR)  \n (5) Fibonacci(do/while) \n (6) Fibonacci(While) \n (7)Fatorial(do/while) \n (8) Fatorial(while) \n (9) P.A \n (10) P.G \n (11) Maior/Menor \n (12) Raiz Quadrada \n (13) Exponenciacao \n (14) Sair \n" ;

while(i)
{
	printf("%s\n", menu);

	scanf("%d",&opc);
		
	switch(opc)
	{
		case 1:

			media();

		break;

		case 2:

			ajuste();

		break;

		case 3:

			fibo();

		break;

		case 4:

			fatorial();

		break;

		case 5:

			fibodowhile();

		break;

		case 6:

			fibowhile();

		break;
		
		case 7:

			fatdowhile();

		break;
		
		case 8:

			fatwhile();

		break;
		
		case 9:

			pa();

		break;

		case 10:

			pg();

		break;

		case 11:

			maiorMenor();

		break;

		case 12:

			raiz();

		break;

		case 13:

			expo();
		break;

		case 14: 

			printf("Saindo do sistema !");

			i = 0;
		break;
	}
}
 	
    return 0;
}

int media()
{
	int media, m1, m2, p1, p2,t1, t2;


	
	return 0;
}

ajuste()
{
    float numero, preco, ajus, valornew;
	int i = 1, opc;

	char menu[] = "\n\nSelecione abaixo o percentual que sera descontado: \n\n (1)Desconto de 1.5% \n (2)Desconto de 2.8% \n (3)Desconto de 3.15% \n (4)Desconto de 4.40% \n (5)Desconto de 5.50% \n (6) Sair \n";


	printf("\nInforme um valor para aplicar o desconto: \nR$ ");
	scanf("%f", &numero);

		while (i)
		{

			printf("\n%s\n", menu);

			scanf("%d", &opc);

			switch(opc)
			{
				case 1:
				
					ajus = 1.5 / 100;
					preco = numero * ajus;
					
					valornew = numero - preco;

					printf("\nO novo valor eh: R$ %.2f\n", valornew);

				break;

				case 2:
						ajus = 2.8 / 100;
						preco = numero * ajus;
						valornew = numero - preco;

						printf("\nO novo valor eh: R$ %.2f\n", valornew);

				break;
	
				case 3:

						ajus = 3.15 / 100;
						preco = numero * ajus;
						valornew = numero - preco;

						printf("\nO novo valor eh: R$ %.2f\n", valornew);

				break;
				
				case 4:
						ajus = 4.40 / 100;
						preco = numero * ajus;
						valornew = numero - preco;

						printf("\nO novo valor eh: R$ %.2f\n", valornew);
				break;

				case 5:

						ajus = 5.50 / 100;
						preco = numero * ajus;
						valornew = numero - preco;

						printf("\nO novo valor eh: R$ %.2f\n", valornew);
				break;

				case 6:

					printf("Saindo do sistema !");

					i = 0;
				break;

			}
			
		}
	

	return 0;
}


int fibo()
{
	int ant = 1, atual = 1, prox, contador, termo;

	printf("\nInforme o termo que deseja: ");
	scanf("%d",&termo);
	printf("%d",ant);
	
		
	if(termo > 1) //Para printar o 2º termo caso haja alguma necessidade,ou seja, somente para mostrar a ordem, exemplo, se ele digitar 1, o resultado vai aparecer "1 1"
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


int fat (int n);

int fat (int n)
{
	double resultado;

		if(n <= 1)
		{

			return(1);
		}
		else
		{

			resultado = (n * fat(n-1)); //exemplo, N = 4 * fat(4-1), a conta será, 4 * 3, na proxima chamada N = 3 e fat(3- 1), a conta será 3 * 2 e assim por diante, seguindo essa lógica, fat vale 4 * 3 = 12, na próxima chamada fat vale 12 * 2 = 24, depois fat vale 24 * 1 = 24 e depois sae do loop

		}
	return(resultado);
}

fatorial()
{
	int numero, result = 0;

		printf("\nInforme o valor para o calculo do fatorial: ");
		scanf("%d", &numero);

			result = fat(numero);
		printf("O fatorial eh: %d\n", result);

	return(0);
}


fibodowhile() //ARRUMARRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR
{
	int termo, anterior = 1, atual = 1, proximo,cont = 0;

		printf("\n Informe qual o numero, para que seja informado o termo desejado: ");
		scanf("%d", &termo);

			printf("%d", anterior);

			if (termo > 1)  //Não exibe o termo certo quando o usuario digita 1 ou 2
			{
				printf("%d", atual);

			}

				do
				{
					if(termo > 2) {
						proximo = anterior + atual;
						printf("%d", proximo);
						anterior = atual;
						atual = proximo;

						cont++;
					}

				} while (cont < termo - 2);
			
		printf("\n O termo eh:  %d", atual);

	return 0;			
}


fibowhile()
{
	int termo, cont = 2, anterior = 1, atual = 1, proximo; 
		
		printf("\nInforme um valor, para que seja exibido o termo: ");
		scanf("%d", &termo);

			printf("%d", anterior);
			printf("%d", atual);

					while (cont < termo)
					{
						proximo = atual + anterior;
						anterior = atual;
						atual = proximo;
						
						printf("%d", proximo);

						cont++;
					}

	printf("\nO termo eh: %d", atual);
			
	return(0);
}

fatdowhile()
{
	int fat, numero = 0;

		printf("\n Informe um valor para a fatoracao: ");
		scanf("%d", &numero);

		fat = 1;  //se eu colocar dentro do laço o resultado sempre será 2, porque  fat sempre será = 1

			do
			{
				fat = fat * numero;
				numero--;

			} while (numero > 1);  //Caso o número seja 1, ele vai sair do laço
			
	printf("\n O fatorial eh: %d\n", fat);

	return(0);
}
fatwhile()
{
	int fat = 1, numero = 0;

		printf("\nInforme um valor, para que seja feito o calculo do fatorial: ");
		scanf("%d", &numero);

			while (numero > 1)
			{
				fat = fat * numero;
				numero--;
			}
		printf("\nO fatorial eh: %d \n", fat);
			

	return(0);
}

pa()
{
	int termo;
	float result;
	 printf("Informe o termo: ");
	 scanf("%d",&termo);
	result = (termo * (termo + 1)) / 2;
	printf("O resultado e7: %f", result);

}
pg()
{
	int termo, cont = 0, coeficiente, resultado;
	printf("Informe o primeiro termo:");
	scanf("%d", &termo);

	printf("Informe o coeficiente:");
	scanf("%d", &coeficiente);
	resultado = termo * coeficiente;
	printf("%d", resultado);
	while(cont <= termo) {
		resultado = resultado * coeficiente;
		printf("%d", resultado);
		cont++;
	}
}
int maiorMenor(){
	int contador, vetor[5], *valor, maior,menor;  //*valor vai guardar o valor dela no mesmo endereço do VETOR e não o conteudo da posição do vetor

		valor = vetor; 

	for(contador = 0; contador < 5; contador++)
	{

		printf("\nDigite os valores equivalente a posicao %d: ", contador);
        scanf("%d", valor);  //valor já é endereço por isso eu coloco somente o valor sem &

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
					if(*valor > maior) //Exemplo *valor = 1, digamos que enquanto contador foi igual a 0 eu atribui para maior e menor o numero 1. O if vai verificar, *valor = 2, é maior que a variavel maior, que é igual a 1, como não é, ela vai atribuir 2 para maior

					 // e a variavel menor vai continuar com o valor 1 até que na próxima chamada o valor que o usuario colocar seja menor que 1
					{	 

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
raiz()
{
	int numero, resultado = 0;

	printf("\nInforme um numero para que seja mostrado sua raiz (quadrada): ");
	scanf("%d", &numero);

		resultado = sqrt(numero);
	printf("\nA raiz quadrada do numero informado eh: %d \n", resultado);

}

expo()
{
	int num, expo, result = 0;

		printf("\nInforme um numero :");
		scanf("%d", &num);

		printf("\nInforme qual o expoente que deseja elevar: ");
		scanf("%d", &expo);

		result = pow(num,expo);

	printf("\nO resultado eh: %d", result);

}