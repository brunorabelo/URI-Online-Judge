//
//  main.c
//  All You Need Is Love
//
//  Created by MacBook on 13/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define charBin(x) ((x)=='1'?1:0)


int mdc(int x,int y){
    
    while(x!=0&&y%x!=0){
        if(x>y)
            x=x%y;
        else
            y=y%x;
    }
    
    return x==0?y:x;
}

int powInt(int a,int exp){
    int result=1;
    
    for(int i=1;i<=exp;i++)
        result*=a;
    
    return result;
    
}


long long int binToDec(char bin[35]){
    long long int decimal=0;
    int tamanho =strlen(bin);
    for(int i=0;i<tamanho;i++){
        int a =(bin[tamanho-1-i]=='1'?1:0);
        decimal+=(bin[tamanho-1-i]=='1'?1:0)*powInt(2, i);
    }
    
    return decimal;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n,x1,x2,p=0;
    char s1[35],s2[35];
    
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%s%s",s1,s2);
        p=0;
        x1=binToDec(s1);
        x2=binToDec(s2);
        
        
//        for(int j=2;j<=x1 && j<=x2;j++){
//            if(mdc(x1,mdc(x2, j))!=1){
//                p=1;
//                break;
//            }
//        }
//            
//        
        
        if(mdc(x1,x2)!=1){
            printf("Pair #%d: All you need is love!\n",i+1);
            
        }
        else{
            printf("Pair #%d: Love is not all you need!\n",i+1);
            
        }
        
        
        
        
    }
    
    
    
    
    
    return 0;
}
