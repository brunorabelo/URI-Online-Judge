//
//  main.cpp
//  MacPRONALTS
//
//  Created by MacBook on 01/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n,q,item;
    double amount=0;
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        
        scanf("%d",&item);
        scanf("%d",&q);
        switch (item) {
            case 1001:
                amount+=q*1.5;
                break;
            case 1002:
                amount+=q*2.5;
                break;
            case 1003:
                amount+=q*3.5;
                break;
            case 1004:
                amount+=q*4.5;
                break;
            case 1005:
                amount+=q*5.5;
                break;
            default:
                break;
        }
    }
    
    printf("%.2lf\n",amount);
    
    
    return 0;
}
