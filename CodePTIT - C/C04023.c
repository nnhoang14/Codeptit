#include <stdio.h>

int main(){
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]<a[j]){
                int tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
        }
    }
    for(int i=0;i<n;i++)printf("%d ",a[i]);
    return 0;
}
