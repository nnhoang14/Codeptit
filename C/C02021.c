#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int gap=0;
        for(int j=n;j>n-i;j--){
            if(j!=n)gap=gap+j;
            printf("%d ",i+gap);
        }
        printf("\n");
    }
}