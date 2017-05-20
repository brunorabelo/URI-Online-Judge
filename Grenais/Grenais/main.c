//
//  main.c
//  Grenais
//
//  Created by MacBook on 07/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int cont_grenais=0,cont_inter=0,cont_gremio=0,cont_empate=0,gol_inter,gol_gremio,menu;
    
    
    
    do{
        cont_grenais++;
        scanf("%d%d",&gol_inter,&gol_gremio);
        
        if(gol_gremio>gol_inter)
            cont_gremio++;
        else if(gol_inter>gol_gremio)
            cont_inter++;
        else
            cont_empate++;
        
        
        
        
        do{
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d",&menu);
        }while(menu!=1&&menu!=2);
        
    }while(menu==1);
    
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",cont_grenais,cont_inter,cont_gremio,cont_empate);
    
    if(cont_inter>cont_gremio){
        printf("Inter venceu mais\n");
    }else if(cont_gremio>cont_inter)
        printf("Gremio venceu mais\n");
    else
        printf("Não houve vencedor\n");
    
    
    return 0;
}
