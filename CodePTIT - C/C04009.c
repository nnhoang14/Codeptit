#include <stdio.h>
#include <math.h>

int main()
{
    int n,a[100],b[100],d[100],c=-1,l=-1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            c++;
            b[c]=a[i];
        }
        else {
            l++;
            d[l]=a[i];
        }
    }
    for(int i=0;i<=c;i++)printf("%d ",b[i]);
    printf("\n");
    for(int i=0;i<n-(c+1);i++)printf("%d ",d[i]);
    return 0;
}
