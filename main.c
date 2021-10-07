#include <stdio.h>

int main(void) {
  char nome[101];
  char saude;
  int  idade;
  float peso;

  printf("Digite seu nome: ");
  gets(nome);

  printf("Digite seu peso: ");
  scanf("%f", &peso);

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  printf("Digite sua condição de saude: ");
  scanf(" %c", &saude);


 if( idade >= 18 && idade <= 69 && peso >=50 && saude =='b' ){
  printf("Voce pode doar sangue");
 }
 else{
   printf("Voce nao pode doar sangue");
 }

}
