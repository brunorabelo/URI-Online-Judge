//
//  main.c
//  Array Fill IV
//
//  Created by MacBook on 07/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

void printPar(int array[],int length);

void printPar(int array[],int length){
    
    for(int i=0;i<length;i++)
        printf("par[%d] = %d\n",i,array[i]);
    
}

void printImpar(int array[],int length);

void printImpar(int array[],int length){
    
    for(int i=0;i<length;i++)
        printf("impar[%d] = %d\n",i,array[i]);
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int cont1=0,cont2=0,array1[5],array2[5],n;
    
    for(int i=0;i<15;i++){
        scanf("%d",&n);
        if(n%2!=0){
            array1[cont1++]=n;
        }
        else
            array2[cont2++]=n;
        
        
        if(cont1==5){
            printImpar(array1,cont1);
            cont1=0;
        }
        
        if(cont2==5){
            printPar(array2, cont2);
            cont2=0;
        }
    }
    
    if(cont1!=0){
        printImpar(array1, cont1);
    }
    if(cont2!=0){
        printPar(array2, cont2);
    }
    
    
    
    
    
    return 0;
}
