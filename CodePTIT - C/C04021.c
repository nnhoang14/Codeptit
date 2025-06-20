#include <stdio.h>

int main(){
    int n,a[100],tt,t;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&tt);
    t=tt;
    for(int i=0;i<n;i++){
        if(i<tt){
            printf("%d ",a[n-t]);
            t--;
        }
        else printf("%d ",a[i-tt]);
    }
    return 0;
}
