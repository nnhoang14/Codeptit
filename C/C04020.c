#include <stdio.h>

int main(){
    int n,a[100],tt;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&tt);
    for(int i=0;i<n;i++){
        if(i<n-tt)printf("%d ",a[i+tt]);
        else printf("%d ",a[i-(n-tt)]);
    }
    return 0;
}
