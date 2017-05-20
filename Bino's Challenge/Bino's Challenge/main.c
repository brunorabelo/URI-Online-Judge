//
//  main.c
//  Bino's Challenge
//
//  Created by MacBook on 09/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n,atual,cont_2=0,cont_3=0,cont_4=0,cont_5=0;
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&atual);
        
        if(atual%2==0)
            cont_2++;
        if(atual%3==0)
            cont_3++;
        if(atual%4==0)
            cont_4++;
        if(atual%5==0)
            cont_5++;
        
        
    }
    
    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n",cont_2,cont_3,cont_4,cont_5);
    
    
    return 0;
}
