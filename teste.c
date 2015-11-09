/*
 * teste.c
 1.12.1. Fazer um algoritmo que:
	-Leia um número indeterminado de linhas contendo cada uma a idade de um indivíduo.
	-A última linha que não entrará nos cálculos, contém o valor da idade igual a zero.
	-Calcule e escreva a idade média deste grupo de indivíduos
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int idade = 1;
	int soma = 0;
	float media = 0;
	int i = 0;
	while(idade != 0){
		printf("Entre com uma idade: ");
		scanf("%d",&idade);
			if( idade > 0){
				soma = soma + idade;
				i++;
				media = (soma/i);
			}
	}
	
	printf("a media das idades eh  %.2f",media);
	return 0;
}
