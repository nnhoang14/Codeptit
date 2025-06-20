#include <stdio.h>
#include <math.h>

int main()
{
    int n,max=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            for(int j=max+1;j<max+1+i;j++){
                printf("%c ",j+96);
            }
        }
        else{
            for(int j=max+i;j>max;j--){
                printf("%c ",j+96);
            }
        }
        max+=i;
        printf("\n");
    }
}