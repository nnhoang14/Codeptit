#include <stdio.h>

int main()
{
    int n,c[100],dc=0,sm=0;
    scanf("%d",&n);
    while (n!=0)
    {
        c[dc++]=n%2;
        n/=2;
    }
    for(int i= dc-1;i>=0;i--){
        sm=sm*10+c[i];
    }
    printf("%d\n",sm);
    return 0;
}
