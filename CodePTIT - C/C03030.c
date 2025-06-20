#include <stdio.h>
#include <math.h>

int dkg(int n){
    int a=n%10;
    n/=10;
    while (n)
    {
        int b=n%10;
        if(b>a)return 0;
        a=b;
        n/=10;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        int a;
        scanf("%d",&a);
        int dau =pow(10,a-1),cuoi=pow(10,a);
        for(int i=dau;i<cuoi;i++){
            if(dkg(i))printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
