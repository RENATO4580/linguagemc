#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int ano;
    int qtd = 0;

    for (ano = 1950 ; ano <= 2026; ano++){
         if ( ano % 4 == 0 ){
              printf("o ano %d é bissesto\n" ,ano);
              qtd++;
         }
         
    }
    printf("================================\n");
    printf("A quantidade de anos bissesto é %d\n" ,qtd);
    return 0;

}