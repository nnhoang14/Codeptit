#include <stdio.h>

int main()
{
    int a,b,n[100][100],c[100][100];
    scanf("%d%d",&a,&b);
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)scanf("%d",&n[i][j]);
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            c[j][i]=n[i][j];
        }
    }
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
