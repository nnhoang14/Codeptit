#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        int a,b[1000];
        scanf("%d",&a);
        for(int i=0;i<a;i++)scanf("%d",&b[i]);
        for(int i=0;i<a;i++){
            int d=0;
            for(int j=0;j<a;j++){
                if(b[i]<=b[j]&&j>i)d++;
            }
            if(d==0)printf("%d ",b[i]);
        }
        printf("\n");
    }
    return 0;
}
