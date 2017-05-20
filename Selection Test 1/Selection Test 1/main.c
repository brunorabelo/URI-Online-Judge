//
//  main.c
//  Selection Test 1
//
//  Created by MacBook on 24/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    
    if(b>c&&d>a&&(c+d)>(a+b)&&c>0&&d>0&&a%2==0){
        printf("Valores aceitos\n");
    }else printf("Valores nao aceitos\n");
    
    return 0;
}
