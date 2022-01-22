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
    int i,j,a[6][6],sum,f=1,max=0;
    for(i=0;i<6;i++)
    for(j=0;j<6;j++)
    scanf("%d",&a[i][j]);
    
    for(i=1;i<5;i++){
        for(j=1;j<5;j++){
            sum = a[i][j]+a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
            if(f==1){
                max=sum;
                f=0;
            }
            if(max<sum)
            max=sum;
            
        }
    }
    printf("%d",max);
    return 0;   
}
