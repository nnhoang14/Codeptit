#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        int a;
        long long int b[1000];
        scanf("%d",&a);
        b[0]=1;
        b[1]=1;
        if (a>2)for (int i=2;i<a;i++){
            b[i]=b[i-1]+b[i-2];
        }
        printf("%lld\n",b[a-1]);
    }
    return 0;
}
