#include <stdio.h>
#include <math.h>

int main()
{
    int a,b=1,c;
    scanf("%d",&a);
    c=a;
    for(int i=1;i<=a;i++){
        for(int m=1;m<c;m++){
            printf("~");
        }
        for(int j=1;j<=b;j++){
            printf("*");
        }
        printf("\n");
        c--;
        b++;
    }
    return 0;
}
