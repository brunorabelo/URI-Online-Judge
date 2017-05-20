//
//  main.cpp
//  Square Matrix III
//
//  Created by MacBook on 01/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

void printSpace(int q);
void printSpace(long long int q){
    for(long long int i=0;i<q;i++)
        printf(" ");
}
long long int pow(long long int n,long long int pot);
long long int pow(long long int n,long long int pot){
    if(pot==0) return 1;
    for(int i=1;i<pot;i++){
        n*=2;
    }
    return n;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    long long int space=0,size,a,linha=1;
    
    scanf("%lld",&size);
        
    
    
    while(size!=0){
        space=0;
        long long int ultimo=pow(pow(2, size-1), size);
        for(a=10;(double)ultimo/(double)a>1.0;a*=10)
            space++;
        for(long long int i=0;i<size;i++){
            for(long long int j=0;j<size;j++){
                int q=0;
                long long int ultLinha=pow(pow(2,i), j+1);
                for(a=10;(double)ultLinha/(double)a>1.0;a*=10)
                    q++;
                printSpace(space-q);
                printf("%lld",pow(pow(2,i), j+1));
                if(j!=size-1)
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");
        
        
        linha*=2;
        scanf("%lld",&size);
    }
    
    
    
    
    
    return 0;
}
