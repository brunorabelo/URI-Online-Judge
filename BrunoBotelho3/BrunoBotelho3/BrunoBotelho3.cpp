/* Bruno Rabelo Wenchenck Botelho */
/* Turma 21.2 */
/* Exercício 3: Multi-tarefas */
/* */
/* Programa compilado com Xcode 8.3 */
// Instituto Tecnológico de Aeronáutica
// CES-10: Introdução à Computação
// Prof. Armando
// Abril de 2017


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // declaracao de variaveis
    //cont->contador
    FILE *entrada,*saida;
    char tarefa;
    int cont_total,dia,mes,ano,data_com_problema,eh_ano_bissexto,
    numero_primo,numero_divisor,maior_numero_primo,eh_primo,
    caso_maior_numero_primo,numero_quadrado_perfeito,
    eh_quadrado_perfeito,numero_raiz_quadrada,
    numero_multiplo_21,maior_numero_multiplo_21,caso_maior_numero_21,
    cont_tarefa_D,cont_tarefa_P,cont_tarefa_Q,cont_tarefa_M,cont_multiplos_21;
    
    // mensagem inicial na tela
    printf("Inicio do Programa\n\n");
    
    
    // atribuicao inicial para algumas variaveis
    cont_total=0,cont_tarefa_D=0,cont_tarefa_Q=0,cont_tarefa_P=0,
    cont_tarefa_M=0,maior_numero_primo=-1,maior_numero_multiplo_21=-1,
    caso_maior_numero_primo=-1,caso_maior_numero_21=-1,cont_multiplos_21=0;
    
    // abrir arquivos de entrada e saida
    entrada = fopen("C:\\Lab3\\entrada3.txt","r");
    saida = fopen("C:\\Lab3\\BrunoBotelho3.txt","w");
    
    
    
    // ler a primeira letra
    fscanf(entrada," %c",&tarefa);
    
    // enquanto nao aparecer a letra F
    while(tarefa!='F'&&tarefa!='f'){
        //Incrementa o contador de casos
        cont_total++;
        
        // tarefa D:
        if(tarefa=='d'||tarefa=='D'){
            //Incrementa a tarefa D
            cont_tarefa_D++;
            //Assume-se inicialmente que a data não está com problema
            //e que o ano não é bissexto
            data_com_problema=0;
            eh_ano_bissexto=0;
            
            // ler dia, mes, ano
            fscanf(entrada,"%d%d%d",&dia,&mes,&ano);
            
            // verifica se a data eh valida
            
            //Verifica validade do ano.
            if(ano<1583 || ano>3000)
                data_com_problema=1;
            else{
                //Verifica se ano eh bissexto
                if(ano%400==0||(ano%100!=0&&ano%4==0))
                    eh_ano_bissexto=1;
                
                
                //verifica mes
                if(mes<1 || mes>12)
                    data_com_problema=1;
                
                else{
                    //verifica dia
                    
                    //mes com 31 dias
                    if((mes<=7 && mes%2!=0)||(mes>7 && mes%2==0)){
                        if(dia<1 || dia>31)
                            data_com_problema=1;
                    }
                    
                    //verifica fevereiro
                    else if(mes==2){
                        
                        if(eh_ano_bissexto==1){
                            if(dia<1 || dia>29)
                                data_com_problema=1;
                            
                        }
                        else if(dia<1 || dia>28)
                            data_com_problema=1;
                        
                    }
                    
                    //verifica restante dos meses
                    else{
                        if(dia<1 || dia>30)
                            data_com_problema=1;
                    }
                    
                }
                
            }
            
            if(data_com_problema==1)
                fprintf(saida,"%3d:  %02d/%02d/%d invalida\n",cont_total,dia,mes,ano);
            else
                fprintf(saida, "%3d:  %02d/%02d/%d ok\n",cont_total,dia,mes,ano);
            
        }
        
        // tarefa P:
        else if(tarefa=='p' || tarefa=='P'){
            //Incrementa contador da tarefa P
            cont_tarefa_P++;
            //Assume-se que o número é primo
            eh_primo=1;
            numero_divisor=2;
            // ler numero
            fscanf(entrada,"%d",&numero_primo);
            
            //1 não é primo
            if(numero_primo==1)
                eh_primo=0;
            
            // verifica se eh primo
            //o teste de divisores poderia parar na raiz quadrada do número verificado
            //mas por causa do arredondamento, esse método não é 100% confiável.
            while(numero_divisor<numero_primo && eh_primo==1){
                if(numero_primo%numero_divisor==0)
                    eh_primo=0;
                numero_divisor++;
            }
            
            if(eh_primo==1){
                
                // guarda informacao do maior primo ate o momento
                if(numero_primo>maior_numero_primo || maior_numero_primo==-1){
                    maior_numero_primo=numero_primo;
                    caso_maior_numero_primo=cont_total;
                }
                fprintf(saida,"%3d:  %0d primo\n",cont_total,numero_primo);
            }
            else
                fprintf(saida,"%3d:  %0d nao primo\n",cont_total,numero_primo);
        }
        
        
        // tarefa Q:
        else if(tarefa=='q'||tarefa=='Q'){
            cont_tarefa_Q++;
            eh_quadrado_perfeito=0;
            
            // ler numero
            fscanf(entrada,"%d",&numero_quadrado_perfeito);
            
            // verifica se eh quadrado perfeito
            numero_raiz_quadrada=sqrt(numero_quadrado_perfeito);
            //verifica com o anterior, a raiz e o sucessor da raiz, para garantir que não
            //ocorre problemas por arredondamento
            if((numero_raiz_quadrada+1)*(numero_raiz_quadrada+1)==numero_quadrado_perfeito
               ||(numero_raiz_quadrada-1)*(numero_raiz_quadrada-1)==numero_quadrado_perfeito
               || numero_raiz_quadrada*numero_raiz_quadrada==numero_quadrado_perfeito)
                eh_quadrado_perfeito=1;
            
            if(eh_quadrado_perfeito==1)
                fprintf(saida,"%3d:  %0d quadrado perfeito\n",cont_total,numero_quadrado_perfeito);
            else
                fprintf(saida,"%3d:  %0d nao quadrado perfeito\n",cont_total,numero_quadrado_perfeito);
            
        }
        
        // tarefa M:
        else if(tarefa=='M' || tarefa=='m'){
            cont_tarefa_M++;
            // ler numero
            fscanf(entrada,"%d",&numero_multiplo_21);
            
            // verifica se eh multiplo de 21
            if(numero_multiplo_21%21==0){
                fprintf(saida,"%3d:  %0d multiplo de 21\n",cont_total,numero_multiplo_21);
                
                // guarda informacao do maior ate o momento
                if(numero_multiplo_21>maior_numero_multiplo_21 || cont_multiplos_21==0){
                    maior_numero_multiplo_21=numero_multiplo_21;
                    caso_maior_numero_21=cont_total;
                }
                
                cont_multiplos_21++;
            }
            else
                fprintf(saida,"%3d:  %0d nao multiplo de 21\n",cont_total,numero_multiplo_21);
            
        }
        
        // ler a proxima letra
        fscanf(entrada," %c",&tarefa);
    }
    // Fim do arquivo de entrada. Escrever as informaÁıes "acumuladas"
    fprintf(saida,"-----\n\n");
    fprintf(saida,"(a) Quantidade de vezes que foi executada cada tarefa:\n");
    fprintf(saida,"    Data valida:         %d vezes\n",cont_tarefa_D);
    fprintf(saida,"    Primo:               %d vezes\n",cont_tarefa_P);
    fprintf(saida,"    Quadrado perfeito:   %d vezes\n",cont_tarefa_Q);
    fprintf(saida,"    Multiplo de 21:      %d vezes\n\n",cont_tarefa_M);
    
    fprintf(saida,"(b) Qual o maior multiplo de 21:\n");
    if(cont_multiplos_21==0)
        fprintf(saida, "    Nao ocorreu\n\n");
    else{
        fprintf(saida,"    %d\n",maior_numero_multiplo_21);
        fprintf(saida,"    ocorre no caso %d\n\n",caso_maior_numero_21);
    }
    
    fprintf(saida,"(c) Qual o maior primo:\n");
    if(maior_numero_primo!=-1){
    fprintf(saida,"    %d\n",maior_numero_primo);
    fprintf(saida,"    ocorre no caso %d\n\n",caso_maior_numero_primo);
    }
    else fprintf(saida, "    Nao ocorreu\n\n");
    fprintf(saida,"-----\n\n");
    
    // fechar arquivos de entrada e saida
    fclose(entrada);
    fclose(saida);
    
    
    // mensagem final na tela + pausa
    printf("FIM do programa.\n");
    getchar();
    
    // finalizar
    return 0;
}
