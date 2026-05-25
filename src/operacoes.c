#include <stdio.h>
int main(){

int num1;
int num2;
int soma;
int multiplicacao;
int divisao;
int subtrasao;

printf("digite um número inteiro e tecla ENTER\n");
scanf("%d",&num1);

printf("digite outro número inteiro e tecle ENTER\n");
scanf("%d",&num2);

// vamos realizar a soma entre as duas variáveis (num1 e num2)
// e alocar o resultado na variável soma 
soma = num1 + num2;
multiplicacao = num1 * num2;
divisao = num1 / num2;
subtrasao = num1 - num2;


printf("A soma dos números %d e %d resultou em %d\n",num1,num2,soma);
printf("A multiplicação números %d e %d resultou em %d\n",num1,num2,multiplicacao);
printf("A divisão dos números %d e %d resultou em %d\n",num1,num2,divisao);
printf("A subtração dos números %d e %d resultou em %d\n",num1,num2,subtrasao);

return 0;

}