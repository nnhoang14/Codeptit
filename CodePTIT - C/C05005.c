#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    int cp=t;
    while(t--){
        int a,b,n[10][10];
        scanf("%d%d",&a,&b);
        printf("Test %d:\n",cp-t);
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++)scanf("%d",&n[i][j]);
        }
        for(int i=0;i<b-1;i++){
            for(int j=0;j<a-1;j++){
                printf("%d ",n[i+1][j+1]);
            }
        printf("\n");
    }
    }
    return 0;
}
