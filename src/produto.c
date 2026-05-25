#include <stdio.h>
int main(){
    //vamos usar as variáveis com o tipo de dado float, pois.
    // este programa recebe valores com casas decimais 
    float preco;
    float taxa;
    float parcela;
    float resultado;
    float resultadoParcela; 
    /*
    camel case (nomocompletocliente)
    snake case (nome_completo_cliente)
    simples case (nome completocliente)
    */

    printf("digite o preço do produto e tecle Enter\n");
    scanf("%f",&preco);

    printf("digite a taxa de acréscimo sem o simbolo de porcentagem e tecle Enter\n");
    scanf("%f" ,&taxa);

    printf("digite o número de parcelas e tecle Enter\n");
    scanf("%f" ,&parcela);

    resultado = preco * (taxa /100) + preco;
    resultadoParcela = resultado / parcela;

    printf("o valor final do produto é R$ %.2f\n" , resultado);
    printf("o valor da parcela é R$ %.2f\n" ,resultadoParcela);


    return 0;



}