//
//  main.cpp
//  Roman Numerals for Page Numbers
//
//  Created by MacBook on 02/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>




int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a,b0,b1,b2;
    
    scanf("%d",&a);
    
    
    b0=a%10;
    b1=(a%100)/10;
    b2=(a%1000)/100;
    
    if(b2==9){
        printf("CM");
    }
    else if(b2>=5){
        printf("D");
        for(int i=5;i<b2;i++){
            printf("C");
        }
    }
    else if(b2==4){
        printf("CD");
    }
    else{
        for(int i=1;i<=b2;i++){
            printf("C");
        }
    }
    
    if(b1==9){
        printf("XC");
    }
    else if(b1>=5){
        printf("L");
        for(int i=5;i<b1;i++)
            printf("X");
    }
    else if(b1==4)
        printf("XL");
    else
        for(int i=1;i<=b1;i++)
            printf("X");
    
    if(b0==9)
        printf("IX");
    else if(b0>=5){
        printf("V");
        for(int i=5;i<b0;i++){
            printf("I");
        }
    }
    else if(b0==4)
        printf("IV");
    else
        for(int i=1;i<=b0;i++)
            printf("I");
    
    printf("\n");
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
