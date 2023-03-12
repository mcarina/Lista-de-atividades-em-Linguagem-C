#include <stdio.h>
#include <stdlib.h>


//Imprimir o algorismo da casa das dezenas com uma entrada de 3 números:

int main(){
	int numero, centena, dezena, resto;
	scanf("%d", &numero);
	centena = numero/100;
	resto = numero %100;
	dezena = resto/10;
	printf("a dezena e %d", dezena);
	
	return 0;
}



//Data do formato DDMMAA para MM/DD/AA:

int main(){
	int data;
	printf("data em formato DDMMAAAA: ");
	scanf("%d", &data);
	
	int mes = (data/10000)%100;
	int dia = (data/1000000)%100;
	int ano = data%100;
    printf("em forma DD/MM/AAAA : %02d/%02d/%02d. \n", mes, dia, ano);

}



//Imprimir "E PRECISSO FAZER TODOS OS ALGORITMOS PARAR!":

int main(){
	printf("E PRECISSO FAZER TODOS OS ALGORITMOS PARAR!");
}



//Imprimir o produto entre 28*43:

int main(){
	int a=28, b=43, c= a*b;
	printf("Os numeros entre 28 e 43: %d ", c);
}



//Média aritmética entre 3 números:

int main(){
	int a, b, c, media;
	printf("digite os 3 numero: \n");
	scanf("%d%d%d", &a,&b,&c);
	media=(a+b+c)/3;
	printf("a media e: %d", media);
}



//Ler dois números inteiros:

int main(){
	int a,b;
	printf("digite um numero inteiro: ");            
	scanf("%d", &a);
	printf("digite um numero inteiro: ");
	scanf("%d", &b);
	printf(" os numeros sao: %d e %d", a,b);
}



//Imprimir o sucessor e antecessor de um número:

int main(){
	int a,b,c;
	printf("difite um numero para ter seu sucessor e antecessor: ");
	scanf("%d", &a);
	
	b =a+1;
	c =a-1;
	printf("seu sucessor e antecessor sao: %d e %d", b,c);
}




