#include <stdio.h>
#include <math.h>


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



//Dois númmeros inteiros e imprimir o dividendo, divisor, quociente e resto:

int main(){
	int divi, divisor, quoci, resto;
	printf("Digite um numero a ser dividido: ");
	scanf("%d", &divi);
	
	printf("Digite um numero por qual ele vai ser dividido: ");
	scanf("%d", &divisor);
	
	quoci = divi/divisor;
	
	resto = divi%divisor;
	
	printf("O dividendo %d e o divisor %d tem o quociente igual a %d \n Com o resto %d", divi, divisor, quoci, resto);
}




//entrada de quatro numeros para se ter uma media de ponderada, os pesos são 1,2,3 e 4:

int main(){
	int a=1, b=2, c=3, d=4, soma1, soma2, media, valor;
	printf("informe um valor para ser ter a media ponderada: ");
	scanf("%d", &valor);
	
	soma1 = (a*valor)+(b*valor)+(c*valor)+(d*valor);
	soma2= a+b+c+d;
	media = soma1/soma2;

	
	printf("a media ponderada e: %d", media);
	
}



//entrar com angulos e imprimir, seno, cosseno, tangente, secante, cossecante e cotangente:

int main (){
	float a, b, c=0,sen, cos, tan, sec, csc, cot;
	printf("informe a hipotenusa: ");
	scanf("%f", &a);
	
	printf("informe o cateto oposto: ");
	scanf("%f", &b);
	
	sen = b/a;
	cos= c/a;
	tan= b/c;
	sec= 1/cos;
	csc= 1/sen;
	cot= (1/tan)/(cos/sen);
	
	printf("seno: %f \n", sen);
	printf("cosseno: %f \n", cos);
	printf("tangente: %f \n", tan);
	printf("secante: %f \n", sec);
	printf("cossecante: %f \n",csc);
	printf("cotangente: %f \n", cot);
	
	return (0);
}



//Imprimir números com a base 10:

int main(){
	int num, resul;
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	resul = num/10;
	
	printf("Numero com a base 10: %d", resul);
}
 
 
 //entra com um numero é a base a ser usada:  

int main(){
	int num, base, resul;
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	printf("Digite a base: ");
	scanf("%d", &base);
	
	resul = num/base;
	
	printf("Numero com a base 10: %d", resul);
}




//Fazer um algoritmo que possa entrar com o saldo de uma aplicação e imprima o novo saldo, considerando o reajuste de 1%:

int main(){
	double saldo, reajuste;
	printf("digite o saldo: ");
	scanf("%f", &saldo);
	
	reajuste = saldo*(1+1/100);
	
	printf("o saldo com reajuste ficou %f reais", reajuste);
}



//Entrar com um número em um formato e imprimir invertido:

int main(){
	int i=1;
	printf("Digite um numero para ser invertido: ");
	scanf("$%d", &i);
	
	while(i <= 3){
	printf("%d", i);
	i++;
	}	
}



//

int main(){
	float sm, desc, valorf, valorp, kw, uKW;
	printf("Digite o salario minimo: ");
	scanf("%f", &sm);
	
	printf("kw gasto por residencia: ");
	scanf("%f", &kw);
	
	printf("Valor do Desconto: ");
	scanf("%f", &desc);
	
	uKW = (sm/7)/100;
	valorp = uKW*kw;
	desc= (valorp*10)/100;
	valorf = valorp - desc;
	
	printf("Valor em reais por kw: %.2f \n", uKW);
	printf("Valor a ser pago: %.2f \n", valorp);
	printf("Valor com desconto: %.2f \n", valorf);
	
}




/* Entrar com um nome e imprimir: 
todo nome: 
primeiro caractere: 
ultimo caractere: 
do primeiro ate o terceiro: 
quarto caractere: 
todos menos o primeiro: 
os dois ultimos: */



/* Entrar com a base e a altura de um retângulo e imprimir a seguinte saída: perimetro, area e diagonal:*/
 
 
 int main(){
 	int a, b, h, p, d, raiz;
 	printf("digite a base: ");
 	scanf("%d", &b);
 	
 	printf("digite a altura: ");
 	scanf("%d", &h);
 	
 	p = 2*(b+h);
 	a = b*h;
 	d = (h*h)+(b*b);
 	raiz = sqrt(d);
 	
 	printf("Perimetro: %d \n", p);
 	printf("Area: %d \n", a);
 	printf("Diagonal: %d \n",raiz);
 	
 }
