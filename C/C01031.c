#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d",&a);
    for(int i=2;i<=a;i++){
        while(a>0)
        {
            if(a%i==0){
                printf("%d",i);
                a=a/i;
                if(a!=1)printf("x");
                }
            else break;
        }
    }
    return 0;
}
