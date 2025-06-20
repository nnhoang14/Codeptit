#include <stdio.h>
#include <math.h>

int main()
{
    int a,b;
    scanf("%d",&a);
    b=a-1;
    for(int i=1;i<=a;i++){
        for(int m=1;m<=b;m++){
            printf("~");
        }
        for(int j=1;j<=a;j++){
            if(i==1||i==a)printf("*");
            else{
                if(j==1||j==a)printf("*");
                else printf(".");
            }
        }
        printf("\n");
        b--;
    }
    return 0;
}
