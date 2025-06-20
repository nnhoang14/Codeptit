#include <stdio.h>
#include <math.h>

int main()
{
    int a,c=1;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
         for(int j=1;j<=c;j++){
         if(i==a)printf("*");
         else{
            if(j==1||j==c)printf("*");
            else printf(".");
            }
         }
         c++;
         printf("\n");
    }
    return 0;
}
