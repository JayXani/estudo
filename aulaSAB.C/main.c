#include <stdio.h>
#include <string.h>     //Biblioteca para manipula��o de string



int main(int argc, char *argv[])
{
	char nome[15],nome2[15], nome3[30];
		
/*
    printf("Informe seu nome: ");		//lembrando que a string para no espa�o e o que vem depois � ignorado
	scanf("%[^\n]", nome);			// [^\n] Quer dizer que ele vai ignorar os espa�os e ele considera que a hora de para � somente quando o usuario clicar em enter

	printf("O nome eh: %s", nome);

	getchar();
	fflush(stdin);*/


	/*printf("Informe seu nome: ");
	scanf("%s",nome);
	
	printf("Informe outro nome: ");
	scanf("%s",nome2);
	
	if(!strcmp(nome, nome2))	 	//strcmp, faz compara��o de sting, 
	{
		printf("As strings sao iguais:");
	}
	else
	{
		printf("As strings sao dferentes");
	}

	*/

	/*
	printf("Informe um nome");
	scanf("%s",nome);

	strcpy(nome2,nome); 		// strcpy, � para copiar um valor de uma string e jogar para outra
	printf("Nome lido: %s",nome);

'*/

	/*
	printf("Informe um nome");
	scanf("%s",nome3);

	printf("Informe um nome");
	scanf("%s",nome);


	strcat(nome3, nome);  //strcat � concatena��o
	printf("O nome eh: %s", nome3);
	*/

	printf("Informe um nome");
	scanf("%s",nome);

	printf("O nome lido foi: %s", strupr(nome)); //strupr exibe tudo em maiusculo
	printf("O nome lido foi: %s", strlwr(nome)); //strlwr mostra tudo em minusculo


	printf("O nome eh %s", strlen(nome)); //Mostra a quantidade de letras que a string possui
 
	



    return 0;
}

