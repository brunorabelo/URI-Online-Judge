//
//  main.c
//  Easy Fibonacci (Recursive)
//
//  Created by MacBook on 01/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
int fibo(int n);

int fibo(int n){
    if(n==1) return 0;
    else if(n==2) return 1;
    else
        return fibo(n-2)+fibo(n-1);
}

int main(int argc, const char * argv[]) {
    
    int n,a1=0,a2=1,temp;
    scanf("%d",&n);
    printf("%d ",0);
    printf("%d",1);
    
    for(int i=3;i<=n;i++){
        temp=a2+a1;
        printf(" %d",temp);
        a1=a2;
        a2=temp;
    }
    
    printf("\n");
    return 0;
}
