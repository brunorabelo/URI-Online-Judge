//
//  main.cpp
//  Sum of Consecutive Odd Numbers II
//
//  Created by MacBook on 31/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        int x,y;
        scanf("%d%d",&x,&y);
        int maior=(x+y+abs(x-y))/2;
        int menor =(x+y-abs(x-y))/2;
        int sum=0;
        for(int j=1+menor;j<maior;j++){
            if(j%2!=0) sum+=j;
        }
        printf("%d\n",sum);
    }
    
    return 0;
}
