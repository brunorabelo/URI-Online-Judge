//
//  main.c
//  Whose Turn Is It?
//
//  Created by MacBook on 08/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    char array[10][20]={"PAR","IMPAR"},palavra[20],p1[20],p2[20],palavra2[20];
    
    int n,n1,n2,index,sum=0;;
    
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%s%s%s%s",p1,palavra,p2,palavra2);
        scanf("%d%d",&n1,&n2);
        if(!strcmp(palavra,array[0]))
            index=0;
        else index=1;
        
        sum=n1+n2;
        
        (n1+n2)%2==index?printf("%s\n",p1):printf("%s\n",p2);
        
    }
    
    
    
    return 0;
}
