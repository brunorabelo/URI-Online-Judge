//
//  main.c
//  Sum of Consecutives Odd Numbers I
//
//  Created by MacBook on 25/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a,b,maior,menor;
    
    scanf("%d%d",&a,&b);
    
    maior = a>b?a:b;
    menor = a>b?b:a;
    int sum=0;
    for(int i=menor+1;i<maior;i++){
        if(i%2!=0)sum+=i;
    }
    
    printf("%d\n",sum);
    
    return 0;
}
