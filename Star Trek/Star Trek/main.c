//
//  main.c
//  Star Trek
//
//  Created by MacBook on 09/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    long long int stars,total_sheep=0,stolen=0,starts_atacked=0,
    *sheep_star,continua=1,next=0,maior_index=-1;
    
    scanf("%llu",&stars);
    
    sheep_star = (long long*) malloc(stars*sizeof(long long));
    
    for(int i=0;i<stars;i++){
        scanf("%llu",sheep_star+i);
    }
    
    while(continua){
        
        if(next>maior_index){
            starts_atacked++;
            maior_index=next;
        }
        
        if(sheep_star[next]>0){
            stolen+=1;
            sheep_star[next]+=-1;
            sheep_star[next]%2==0?next++:next--;
        }else{
            next--;
        }
        
        if(next==stars||next==-1)
            continua=0;
        
        
        
    }
    
    
    for(int i=0;i<stars;i++){
        total_sheep+=sheep_star[i];
    }
    
    printf("%llu %llu\n",starts_atacked,total_sheep);
    
    
    
    return 0;
}
