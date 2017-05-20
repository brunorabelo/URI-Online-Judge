#include <stdio.h>
#include <math.h>

int main(){
    int n,i;
    float dist1=0,dist2=0;
    int a[n],b[n],c[n];
    
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf(" %d",&a[i]);
    }
    for (i=0;i<n;i++){
        scanf(" %d",&b[i]);
    }
    for (i=0;i<n;i++){
        scanf(" %d",&c[i]);
    }
    for (i=0;i<n;i++){
        dist1+=pow(a[i]-b[i],2);
        dist1= pow (dist1,0.5);
    }
    for (i=0;i<n;i++){
        dist2+=pow(a[i]-c[i],2);
        dist2= pow (dist2,0.5);
    }
    if(dist1<dist2) printf("Yan\n");
    else printf("MaratonIME\n");
    return 0;
}
