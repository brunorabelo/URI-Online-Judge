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
    int start,end;
    scanf("%d%d",&start,&end);
    int horas=(end-start)>0?end-start:end-start+24;
    
    if(start==end) horas =24;
    
    printf("O JOGO DUROU %d HORA(S)\n",horas);
    return 0;
}
