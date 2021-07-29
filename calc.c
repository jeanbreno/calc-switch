# calc-switch
// Exercício sobre estrutura condicional switch, na linguagem C. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h> // chama a biblioteca para usar funções matemáticas 
#include <locale.h>

//cabeçalho das funções. sempre declarar antes da função int main
void somar();
float subtrair();
void multiplicar();
float dividir();
void raiz();

// programa principal
int main() 
{
	setlocale(LC_ALL, "");
	int op;
	
	printf("---- Menu de Opcões ---- \n");
	printf("\n1- Somar");
	printf("\n2- Subtrair");
	printf("\n3- Multiplicar");
	printf("\n4- Dividir");
	printf("\n5- Raiz Quadrada");
	printf("\n6- Sair");
	printf("\n\n\tEscolha a opcao..: ");
		scanf("%d", &op);

// estrutura do switch case
		switch (op)
			{
				case 1:
					somar();
				break;
				case 2:
					printf("\n\tSubtracao dos Numeros...: %.2f", subtrair());
				break;
				case 3:
					multiplicar();
				break;
				case 4:
					printf("\n\tDivisao dos Numeros: %.2f", dividir());
				break;
				case 5:
					raiz();
				break;
				case 6:
					printf("\n\tObrigado pela sua participacao");
				break;
				default:
				printf("\n\tOpcao invalida");
			}

		return 0;
}


//funções 
void somar() // função void: a função void não retorna o valor para o "switch case". o printf é dentro da função.
{
	float n1, n2;
	printf("\n\tNumero..: ");
		scanf("%f", &n1);
	printf("\n\tNumero..: ");
		scanf("%f", &n2);
	printf("Soma dos Numeros..: %.2f", n1+n2);
}

float subtrair() // função float: retorna o valor para o switch case. precisa terminar com o "return" e o calculo q vc quer retornar. 
// aí lá no case 4 do switch case é q vai o printf para a saída de dados.
{
	float n1, n2;
	printf("\n\tNumero..: ");
		scanf("%f", &n1);
	printf("\n\tNumero..: ");
		scanf("%f", &n2);
	return n1-n2;
}

void multiplicar ()
{
	float n1, n2;
	printf("\n\tNumero: ");
		scanf("%f", &n1);
	printf("\n\tNumero..: ");
		scanf("%f", &n2);
	printf("\n\tMultiplicacao dos Numeros: %.2f", n1*n2);
}

float dividir()
{	
	float  n1, n2 ;
	printf("\n\tNúmero: ");
		scanf("%f", &n1);
	printf("\n\tNúmero: ");
		scanf("%f", &n2);
		 while (n2==0) // enquanto o usuario tentar dividir por ZERO, entrará no loop. 
			{
				printf("\n\t !Nao e possivel dividir por zero!");
				printf("\n --Digite novamente-- ");
				printf("\n\n\t Numero n1..: ");
					scanf("%f", &n1);
					
				printf("\n\tNumero n2..: ");
					scanf("%f", &n2);
			}		
	 return n1/n2;
}


void raiz()
{
	
	float n1;
	printf("\n\tNumero..: ");
		scanf("%f", &n1);
	printf("\n\tA raiz quadrada desse numero e: %.2f", sqrt(n1));
	
}
