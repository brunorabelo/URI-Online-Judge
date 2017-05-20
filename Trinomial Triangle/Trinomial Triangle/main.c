#include <stdio.h>

int main(){
    long long unsigned int n,result;
    
    scanf("%llu",&n);
    result=1;
    for(int i=0;i<n;i++)
        result=3*result;
    
    
    printf("%llu\n",result);
    return 0;
}
