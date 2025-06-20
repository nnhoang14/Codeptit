#include <stdio.h>

int main()
{
    int n,a[100],b[100]={0},c[100],tt=0,d=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
    for(int i=0;i<n;i++){
        if(b[a[i]]>1){
            d++;
            c[tt++]=a[i];
            b[a[i]]=0;
        }
    }
    printf("%d\n",d);
    for(int i=0;i<d;i++){
        printf("%d ",c[i]);
    }
    return 0;
}
