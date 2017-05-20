//
//  main.c
//  Interval
//
//  Created by MacBook on 24/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //[0,25] (25,50], (50,75], (75,100]
    
    char intervaloc[][10]={ "[0,25]", "(25,50]","(50,75]", "(75,100]"};
    int intervalo[] = {0,25,50,75,100};
    
    float numero;
    scanf("%f",&numero);
    
    int i=0;
    
    /*if(numero==100.0){
        
        printf("Intervalo %s\n",intervaloc[3]);
        return 0;
    }
    */
    while(i<5){
        if(numero>=intervalo[i]){
            if(numero==intervalo[i]) {
                if(numero==0) break;
                i=i-1;
                break;
            }
            else i=i;
        }else {
            i--;
            break;
        }
        i++;
        
    }
    
    
    if(i==5||i==-1){
        printf("Fora de intervalo\n");
        return 0;
    }
    
    printf("Intervalo %s\n",intervaloc[i]);
    
    return 0;
}
