#include <stdio.h>
#include <math.h>

int main()
{
    int n,t;
    scanf("%d",&n);
    t=n;
    while(n--){
        int a,b,ma[100],mb[100],tt;
        scanf("%d%d%d",&a,&b,&tt);
        for (int i=0;i<a;i++){
            scanf("%d",&ma[i]);
        }
        for (int j=0;j<b;j++){
            scanf("%d",&mb[j]);
        }
        printf("Test %d:\n",t-n);
        for (int i=0;i<a+b;i++){
            if(i<tt)printf("%d ",ma[i]);
            else if(i>=tt&&i<tt+b)printf("%d ",mb[i-tt]);
            else printf("%d ",ma[i-b]);
        }
        printf("\n");
    }
    return 0;
}
