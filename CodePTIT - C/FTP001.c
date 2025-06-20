#include <stdio.h>
#include <math.h>

int main()
{
    int n,a[100][100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=j-i;
            if(a[i][j]<0)a[i][j]=0;
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
