#include <stdio.h>

// ler nome, endereço e telefone:

int main(){
	char nome[14], end[14], tel[12];
	
	printf("digite seu nome: ");
	scanf("%14[^\n]s",nome);
	fflush(stdin);
	
	printf("digite seu endereco: ");
	scanf("%14[^\n]s",end);
	fflush(stdin);
	
	printf("digite seu telefone: ");
	scanf("%12[^\n]s", tel);

	printf("Seu nome e %s, mora no endereco %s, telefone: %s",nome,end,tel);

} 




// ler dois números inteiros e aparecer a soma antes do resultado:

int main(){
	int a,b,c;
	
	printf("digite um numero: ");
	scanf("%d",&a);
	
	printf("digite mais um numero: ");
	scanf("%d",&b);

	c= a+b;
	
	printf("Soma %d + %d = %d", a,b,c);
	
}



//ler um numero real e imprimir a terça parte do número:

int main(){
	float Nreal, resultado;
	printf("digite o numero: ");
	scanf("%f", &Nreal);
	
	resultado = Nreal/3;
	
	printf("A terca parte de %f e: %f", Nreal, resultado);
}



//ler dois números reais e exibir a média aritméticos com a mensagem da antes do resultado:

int main(){
	float nota1, nota2, media;
	printf("Digite sua primeira media: ");
	scanf("%f", &nota1);
	
	printf("digite sua segunda media: ");
	scanf("%f", &nota2);
	
	media = (nota1+nota2)/2;
	
	printf("a media %f + %f = %f", nota1, nota2, media);
} 


