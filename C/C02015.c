#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    int gh=2*n-1;
    for(int i=1;i<=n;i++){
        int kt=2*i-1;
        for(int j=1;j<=kt;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
