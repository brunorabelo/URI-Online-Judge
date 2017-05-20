//
//  main.c
//  Multiples
//
//  Created by MacBook on 24/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    char resposta[][30] = {"Sao Multiplos","Nao sao Multiplos"};
    
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==0||b==0) {
        printf("%s\n",resposta[0]);
    }else if(a%b==0||b%a==0) printf("%s\n",resposta[0]);
    else printf("%s\n",resposta[1]);
    
    return 0;
}
