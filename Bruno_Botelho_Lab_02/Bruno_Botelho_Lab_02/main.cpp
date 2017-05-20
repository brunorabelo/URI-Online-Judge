
/* Bruno Botelho                           */
/* Turma 21.2                              */
/* Exercício 2: Juros Simples e Compostos  */
/*                                         */
/* Programa compilado com Xcode 8.3        */

// Instituto Tecnológico de Aeronáutica
// CES-10: Introdução à Computação
// Prof. Armando
// março de

#include <stdio.h>

int main() {
    /*Declarando variáveis que serão usadas ao longo do programa
     valor_emprestimo->Valor do empréstimo inserido pelo usuário
     juros_mensais->Juros inserido pelo usuário
     divida->Divida no mês em questão
     mes->O numero do mês
     tipo_juros->O tipo de juros que o usuário quer*/
    float valor_emprestimo,juros_mensais,divida;
    int mes;
    char tipo_juros;
    
    //Obtendo valores para as variáveis
    printf("Qual o valor do emprestimo?\n");
    scanf("%f",&valor_emprestimo);
    
    printf("Qual o valor dos juros (em %%)?\n");
    scanf("%f",&juros_mensais);
    
    printf("Qual tipo de juros (S = Simples / C = Composto)?\n");
    //Scanf com espaço entre as aspas e a porcentagem
    //para não contar espaços e o caractere de enter.
    scanf(" %c",&tipo_juros);
    
    //Imprimindo o resultado
    printf("\nResposta:\nMes  Divida\n");
    
    /*Tomada de decisão dependendo da escolha do usuário
     Considerando o que está no enunciado, ou seja,
     o usuário digitará um dos caracteres:  'S', 's', 'C','c'*/
    if(tipo_juros=='S'||tipo_juros=='s'){
        for(mes=1;mes<=12;mes++){
            //Cálculo dos juros simples
            divida=valor_emprestimo*(1.00+juros_mensais*mes/100.00);
            printf("%2d   %.2f\n",mes,divida);
        }
    }
    else {
        divida=valor_emprestimo;
        for(mes=1;mes<=12;mes++){
            //Cálculo dos juros compostos
            divida=divida*(1.00+juros_mensais/100.00);
            printf("%2d   %.2f\n",mes,divida);
        }
    }
    
    //O primeiro getchar elimina o enter do ultimo scanf.
    //O segundo impede o programa de fechar antes de o usuário pressionar enter.
    getchar();
    getchar();
    
    
    return 0;
}
