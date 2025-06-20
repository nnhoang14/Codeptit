#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int hc=64+n-1;
    for(int i=0;i<n;i++){
        int gh=hc+n;
        for(int j=0;j<n;j++){
            int t=i+j,kt=hc+t;
            if(kt<gh)printf("%c",(char)kt);
        }
        hc-=2;
        printf("\n");
    }
    return 0;
}
