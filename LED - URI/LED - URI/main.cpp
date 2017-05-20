//
//  main.cpp
//  LED - URI
//
//  Created by MacBook on 20/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <iostream>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        char linha[110];
        
        scanf("%s",linha);
        
        long long int sum=0;
        
        for(int j=0;j<strlen(linha);j++){
            switch (linha[j]) {
                case '1':
                    sum+=2;
                    break;
                case '2':
                    sum+=5;
                    break;
                case '3':
                    sum+=5;
                    break;
                case '4':
                    sum+=4;
                    break;
                case '5':
                    sum+=5;
                    break;
                case '6':
                    sum+=6;
                    break;
                case '7':
                    sum+=3;
                    break;
                case '8':
                    sum+=7;
                    break;
                case '9':
                    sum+=6;
                    break;
                case '0':
                    sum+=6;
                    break;
                    
                    
                default:
                    break;
            }
        }
        printf("%lld leds\n",sum);
        

    }
    
    
    return 0;
}
