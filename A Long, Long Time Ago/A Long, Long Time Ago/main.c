//
//  main.c
//  A Long, Long Time Ago
//
//  Created by MacBook on 09/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n,anos_atras;
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&anos_atras);
        
        if(2015-anos_atras>0){
            printf("%d D.C.\n",2015-anos_atras);
        }else {
            printf("%d A.C.\n",anos_atras-2015+1);
        }
        
        
    }
    
    
    return 0;
}
