#include <stdio.h>

void humanoJogar();
char verificarResultado();
void pcJogar();
void iniciar_matriz();

char tabuleiro[3][3];
void mostrarMatriz();



int main(){
    iniciar_matriz();
    char resultado=' ';
    do{
        mostrarMatriz();
        humanoJogar();
        resultado=verificarResultado();
        if(resultado!=' '){
            break;
        }
        pcJogar();
        resultado=verificarResultado();
        if(resultado!=' '){
            break;
        }

    }while(resultado==' ');

    mostrarMatriz();

    printf("\n");
    switch (resultado){
        case 'X':
            printf("Voc‘ venceu!");
            break;

        case 'O':
            printf("Eu venci!");
            break;

        case 'V':
            printf("Deu velha...");
            break;

        default:
            printf("Algum erro inesperado.");
    }


    return 0;
}

void mostrarMatriz(){

    for(int t=0;t<3;t++){
        printf(" %c | %c | %c ",tabuleiro[t][0],tabuleiro[t][1],tabuleiro[t][2]);
        if(t!=2) printf("\n---|---|---\n");
    }
    printf("\n");


}

void iniciar_matriz(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            tabuleiro[i][j]=' ';
        }
    }
}

void pcJogar(){
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            if(tabuleiro[i][j]==' '){
                tabuleiro[i][j]='O';
                return;
            }
        }
    }
}

char verificarResultado(){
    char resultado='V';
    int i;

    //verificar linhas
    for(i=0;i<3;i++){
        if(tabuleiro[i][0]==tabuleiro[i][1]&&tabuleiro[i][0]==tabuleiro[i][2]) return tabuleiro[i][0];
    }
    //verificar linhas
    for(i=0;i<3;i++){
        if(tabuleiro[0][i]==tabuleiro[1][i]&&tabuleiro[0][i]==tabuleiro[2][i]) return tabuleiro[0][i];
    }


    //verificar diagonais
    if(tabuleiro[0][0]==tabuleiro[1][1]&&tabuleiro[1][1]==tabuleiro[2][2]) return tabuleiro[1][1];
    if(tabuleiro[0][2]==tabuleiro[1][1]&&tabuleiro[1][1]==tabuleiro[2][0]) return tabuleiro[2][0];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(tabuleiro[i][j]==' ') return ' ';
        }
    }

    return resultado;
}



void humanoJogar(){
    int x,y;
    printf("\nInsira uma posi‹o: ");
    scanf("%d %d",&x,&y);
    if((x>3)||(y>3)||(x<1)|(y<1)||(tabuleiro[x-1][y-1]!=' ')){
        printf("\nPosi‹o inv‡lida ou j‡ utilizada");
        humanoJogar();
    }
    else{
        tabuleiro[x-1][y-1]='X';
    }
}
