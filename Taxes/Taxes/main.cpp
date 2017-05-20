//
//  main.cpp
//  Taxes
//
//  Created by MacBook on 31/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int s[4]={0,2000,3000,4500},taxes[4]= {0,8,18,28};
    
    float salary,temp,over[4]={0,0,0,0};
    scanf("%f",&salary);
    temp=salary;
    if(salary>2000.00){
        for(int i=3;i>=0;i--){
            temp=temp-s[i];
            if(temp>0){
                over[i]=temp;
                temp=s[i];
            }
            else
                temp=temp+s[i];
        }
        float taxa=0.00;
        for(int i=0;i<4;i++){
            taxa =taxa+(taxes[i]/100.00)*over[i];
        }
        
        printf("R$ %.2f\n",taxa);
    }
    else{
        printf("Isento\n");
    }
    
    return 0;
}
