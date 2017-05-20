//
//  main.c
//  Game Time
//
//  Created by MacBook on 24/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...

    int continua=1;
    int hs,he,ms,me;
    scanf("%d%d%d%d",&hs,&ms,&he,&me);
    int horas=(he-hs)>=0?(he-hs):(he-hs)+24;
    int min = (me-ms)>=0?(me-ms):60+(me-ms);
    if((me-ms)<0)
        horas--;
    
    if(horas==0&&min==0){
        horas = 24;
    }
    if(horas==-1) horas =23;
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",horas,min);
    return 0;
}
