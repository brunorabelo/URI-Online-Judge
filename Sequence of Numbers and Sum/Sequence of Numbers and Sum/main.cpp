//
//  main.cpp
//  Sequence of Numbers and Sum
//
//  Created by MacBook on 31/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int m,n;
    scanf("%d%d",&m,&n);
    int sum;
    while(m>0&&n>0){
        sum=0;
        int maior=(m+n+abs(m-n))/2;
        for(int i=((m+n-abs(m-n))/2);i<=maior;i++){
            sum+=i;
            printf("%d ",i);
        }
        printf("Sum=%d\n",sum);
        
        scanf("%d%d",&m,&n);
    }
    
    return 0;
}
