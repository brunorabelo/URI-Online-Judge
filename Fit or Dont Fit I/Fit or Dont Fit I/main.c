//
//  main.c
//  Fit or Dont Fit I
//
//  Created by MacBook on 13/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    int fit=1;
    char s1[100],s2[100];
    int t1,t2,n;
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        fit =1;
        scanf("%s%s",s1,s2);
        t1=strlen(s1);
        t2=strlen(s2);
        
        if(t1<t2)
            fit=0;
        else{
            for(int j=0;j<t2;j++){
                if(s1[t1-t2+j]!=s2[j]){
                    fit=0;
                    break;
                }
            }
        }
        
        fit?printf("encaixa\n"):printf("nao encaixa\n");
        
        
    }
    
    
    
    return 0;
}
