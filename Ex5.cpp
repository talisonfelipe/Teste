#include <stdio.h>
#include <string.h>

int main () {
     int x,y,tam;
     char nome[30];
     printf("Digite um Nome: ");
     gets(nome);
     tam=strlen(nome);
     printf("\nO Nome invertido e: ");
     for (x=tam-1; x>=0; x--)
     {
         printf("%c",nome[x]);
     }
     
   
   return 0;
}
