//2) Dado a sequ�ncia de Fibonacci, onde se inicia por 0 e 1 e o pr�ximo valor sempre ser� a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um n�mero, ele calcule a sequ�ncia de Fibonacci e retorne uma mensagem avisando se o n�mero informado pertence ou n�o a sequ�ncia.
//
//
//
//IMPORTANTE:
//
//Esse n�mero pode ser informado atrav�s de qualquer entrada de sua prefer�ncia ou pode ser previamente definido no c�digo;

#include <stdio.h>


int main(){
	int fibo[10];
	int a, b, auxiliar, i, n;
	int existe = 0;

    a = 0;
    b = 1;

    printf("Informe um numero: ");
    scanf("%d", &n);
    
    if( n==1 ){
    	printf( "%d-%d",a,b);
    	
	}
	else if(n==2){
		printf("%d",b);
	}
	   

    for(i = 0; i <10; i++) {

        fibo[i] = a + b;
        
        a = b;
        b = fibo[i];
        
        
        if(n==fibo[i]){
        	existe = 1;
		}
	
        
	}
	for(i = n; i <10; i++) {

    
     	printf("-%d", fibo[i]);
     	
    }
    if(existe==1){
			printf("\n O numero informado  pertence a sequencia");
		}
		else{
			printf("\n O numero informado nao pertence a sequencia ");
	}

	
	return 0;
}

