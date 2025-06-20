#include <stdio.h>

int main(){
    int n,a[100],max=0,m2=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        if(a[i]>max)max=a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<max&&m2<a[i]&&m2<max)m2=a[i];
    }
    printf("%d %d",max,m2);
    return 0;
}
