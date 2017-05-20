#include <stdio.h>
#include <string.h>

#define  MAX 100000
int main(){
    
    char vet[MAX];
    int countA=0, countB=0, i;
    char first,second;
    
    scanf("%s",vet);
    first = vet[0];
    second = first=='A'?'B':'A';
    for (i=0;i<strlen(vet);i++){
        if(vet[i]==first) countA++;
        if(vet[i]==second) countB++;
        if(countA<countB) {
            printf("Nao");
            return 0;
        }
    }
    if(countA==countB) printf("Sim");
    else printf("Nao");
    return 0;
}
