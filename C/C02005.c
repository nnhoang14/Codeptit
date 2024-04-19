#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c=1;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a;i++){
        for(int m=1;m<c;m++){
            printf("~");
        }
        for(int j=1;j<=b;j++){
            printf("*");
        }
        printf("\n");
        c++;
    }
    return 0;
}
