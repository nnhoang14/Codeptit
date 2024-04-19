#include <stdio.h>

int main()
{
    int n,a[100],b[100]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
    for(int i=0;i<n;i++){
        if(b[a[i]]>1){
            printf("%d ",a[i]);
            b[a[i]]=0;
        }
    }
    return 0;
}
