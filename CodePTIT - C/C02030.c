#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int kt=i*2-1,tmp=kt+1;
        for(int j=1;j<=kt;j++){
            int s=j*2;
            if(s<=kt+1)printf("%c",s+62);
            else {
                tmp-=2;
                printf("%c",tmp+62);
            }
        }
        printf("\n");
    }
}