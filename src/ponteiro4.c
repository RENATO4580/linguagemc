#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    // declaração da variavel char (character) letra, simbolo, número
    char letra = 'T';

    // declaração de variavel char para guarda uma palavra, ou seja, uma 
    // string(cadeia de carracteres) - uma coleção de caracteres 

    char nome[10] = "Marina";

    printf("%c\n",letra);
    printf("%s\n",nome);
    printf("%c\n",nome[0]);
    
    return 0; 

}