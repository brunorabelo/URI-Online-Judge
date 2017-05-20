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
    float numbers[6],sum=0.0;
    int cont=0;
    
    
    for(int i=0;i<6;i++){
        float temp;
        scanf("%f",&temp);
        if(temp>0){
            sum+=temp;
            cont++;
        }
        
    }
    
    printf("%d valores positivos\n%.1f\n",cont,sum/(float)cont);
    
    return 0;
}
