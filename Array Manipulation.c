
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    long long int n,m,i,max=0,x=0;
    scanf("%lld%lld",&n,&m); 
    int *arr = (int *)malloc(sizeof(int)*n+1);
    for(i=1;i<=n;i++)
    arr[i]=0;
    for(i=0;i<m;i++){
        long long a,b,k;
        scanf("%lld%lld%lld",&a,&b,&k);
        arr[a]+=k;
        if(b+1<=n)
        arr[b+1]-=k;
    }
    for(i=1;i<=n;i++){
        x+=arr[i];
        if(max<x)
        max=x;
    }
    
    printf("%lld",max);
    return 0;
}
