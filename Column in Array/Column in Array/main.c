//
//  main.c
//  Column in Array
//
//  Created by MacBook on 01/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int col;
    float sum=0.0,n;
    
    char o;
    
    scanf("%d",&col);
    
    scanf(" %c",&o);
    
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%f",&n);
            if(j==col){
                sum+=n;
            }
        }
    }
    
    switch (o) {
        case 'M':
            sum=sum/12.0;
            break;
            
        default:
            break;
    }
    
    printf("%.1f\n",sum);
    
    return 0;
}
