#include <stdio.h>
#include <math.h>

int main()
{
    int n,a[100],min,minh;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    min=a[0];
    for(int i=1;i<n;i++){
        if(min>a[i])min=a[i];
        else minh=a[i];
    }
    for(int i=0;i<n;i++){
        if(minh>a[i]&&min!=a[i])minh=a[i];
    }
    printf("%d %d",min,minh);
    return 0;
}
