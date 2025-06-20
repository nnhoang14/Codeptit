#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        int a,sl=0,sc=0;
        scanf("%d",&a);
        while(a>0){
            int tg=a%10;
            if(tg%2==0)sc++;
            else sl++;
            a/=10;
        }
    printf("%d %d\n",sl,sc);
    }
    return 0;
}
