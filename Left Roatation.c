
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n,d,i,j;
    scanf("%d%d",&n,&d);
    int a[n],s[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++){
        s[i]=a[(d+i)%n];
        
    }
    for(int k=0;k<n;k++){
        printf("%d\t",s[k]);
    }
    return 0;
}
