//
//  main.c
//  Event Time
//
//  Created by MacBook on 07/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
int getInt();
int getInt(){
    char c;
    int a;
    for(int i=0;i<3;i++){
        scanf(" %c",&c);
    }
    
    scanf("%d",&a);
    
    return a;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    char teste;
    int tempo;
    int dia1,h1,m1,s1,dia2,h2,m2,s2;
    int dias=0,horas=0,minutos=0,segundos=0;
    
    dia1=getInt();
    
    scanf("%d",&h1);
    scanf(" %c",&teste);
    
    scanf("%d",&m1);
    scanf(" %c",&teste);
    scanf("%d",&s1);
    
    
    dia2=getInt();
    
    scanf("%d",&h2);
    scanf(" %c",&teste);
    
    scanf("%d",&m2);
    scanf(" %c",&teste);
    scanf("%d",&s2);
    
    
    tempo=(dia2-dia1)*24*60*60+(h2-h1)*60*60+(m2-m1)*60+s2-s1;
    
    dias=tempo/(24*60*60);
     horas =(tempo%(24*60*60))/(60*60);
    minutos=((tempo%(24*60*60))%(60*60))/60;
    segundos=(((tempo%(24*60*60))%(60*60))%60);
    
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",dias,horas,minutos,segundos);
    
    
    
    
    return 0;
}
