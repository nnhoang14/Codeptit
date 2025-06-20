#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            printf("~");
        }
        int kt=i*2-1,tmp=kt+1;
        for(int j=1;j<=kt;j++){
            int s=j*2;
            if(s<=kt+1)printf("%d",s);
            else {
                tmp-=2;
                printf("%d",tmp);
            }
        }
        printf("\n");
    }
}
