//
//  main.c
//  Positives and Average
//
//  Created by MacBook on 25/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int odd=0,even=0,positive=0,negative=0;
    
    
    for(int i=0;i<5;i++){
        int temp;
        scanf("%d",&temp);
        if(temp>0){
            positive++;
        }else if(temp<0) negative++;
        
        if(temp%2==0) even++;
        else odd++;
    }
    
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n",even,odd);
           printf("%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",positive,negative);
    
    return 0;
}
