#include <stdio.h>

int main()
{
    int n,nam,tuan,ngay;
    scanf("%d",&n);
    printf("%d ",nam=n/365);
    printf("%d ",tuan=(n-nam*365)/7);
    printf("%d ",ngay=n-nam*365-tuan*7);
    return 0;
}
