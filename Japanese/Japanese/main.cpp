#include <stdio.h>
int main()
{
    int N,T;
    scanf("%d %d",&N,&T);
    int t[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&t[i]);
    }
    int Ty=T;
    int Tn=T;
    int y=0;
    int n=0;
    while(Ty>0&&y<N)
    {
        Ty=Ty-t[y];
        y++;
    }
    while(Tn>0&&N>0)
    {
        Tn=Tn-t[N-1];
        N--;
        n++;
    }
    if(n>y)printf("Nathan");
    else{if(n<y)printf("Yan");
        else printf("Empate");}
    return 0;
    
}
