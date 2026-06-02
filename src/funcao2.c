#include <stdio.h>
#include "../lib/funclayout.h"
#include "../lib/funcsoma.h"


int main (){
    int x , y , z;
    cabecalho();
    printf("Digite um número inteiro e tecle Enter\n");
    scanf("%d" , &x);
    z = soma(x,y);
    printf("O resultado da soma é %d\n" , z);
    rodape();
    return 0;
    
}