#include <stdio.h>
#include <stdlib.h>

int main (){
    
float nota1, nota2, nota3, nota4, media;
 
// comando system que chama uma execução do sistema operacional 
// que, neste caso será o comando clear
system("clear");

printf("digite a primeira nota: ");
scanf("%f" ,&nota1);

printf("digite a segunda nota: ");
scanf("%f" ,&nota2);

printf("digite a terceira nota ");
scanf("%f" ,&nota3);

printf("digite a quarta nota: ");
scanf("%f" ,&nota4);

    // calcule a media 

    media = (nota1 + nota2 + nota3 + nota4) /4; 
    
        // Exibia a media 

        printf("Media: %.2f\n" , media);

        // verificar aprovação 
        if ( media>= 7){
        printf("Aluno Aprovado\n");
        
        
        }else{
            printf("aluno reprovado\n");

        }
        
        printf("n#########################################################\n");
        printf("Endereço de memória da variável nota1 %p \n" ,&nota1);
        printf("Endereço de memória da variável nota1 %p \n" ,&nota2);
        printf("Endereço de memória da variável nota1 %p \n" ,&nota3);
        printf("Endereço de memória da variável nota1 %p \n" ,&nota4);
        printf("Endereço de memória da variável nota1 %p \n" ,&media);


    



        return 0;

}