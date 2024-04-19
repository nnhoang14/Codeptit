#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=n-i-1;j>0;j--){
            printf("~");
        }
        int kt=i*2+1,tmp=kt;
        for(int j=0;j<kt;j++){
            int s=j*2+1;
            if(s<=kt)printf("%d",s);
            else {
                tmp-=2;
                printf("%d",tmp);
            }
        }
        printf("\n");
    }
}
