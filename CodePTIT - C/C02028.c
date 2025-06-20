#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int hc=65,gh=hc+n*2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int t=i+j,kt=hc+2*t;
            if(kt<gh)printf("%c",(char)kt);
        }
        printf("\n");
    }
    return 0;
}
