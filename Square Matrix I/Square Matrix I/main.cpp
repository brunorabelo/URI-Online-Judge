//
//  main.cpp
//  Square Matrix I
//
//  Created by MacBook on 01/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int menor(int i,int j,int size);
int menor(int i,int j,int size){
    int menor_index=i+j-abs(i-j);
    int maior_index=i+j+abs(i-j);
    maior_index/=2;
    menor_index=menor_index/2;
    int a2=size-j+size-i-abs(size-j+i-size);
    
    a2=a2/2;
    
    return (menor_index+a2-abs(a2-menor_index))/2;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    int size,dif;
    
    scanf("%d",&size);
    
    while(size!=0){
        
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                dif=menor(i,j,size-1);
//                if(dif<1)
//                    printf("%3d ",1);
//                else
                    printf("%3d",dif+1);
                if(j!=size-1)
                    printf(" ");
            }
            printf("\n");
            
        }
        
        scanf("%d",&size);
        printf("\n");
    }
    
    
    
    
    
    return 0;
}
