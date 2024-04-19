#include <stdio.h>
#include <math.h>

int nt(int n){
    if(n<2)return 0;
    else for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return 0;
    }
    return 1;
}
int main()
{
    int t,d;
    scanf("%d",&t);
    d=t;
    while (t--)
    {
        int n,a[100000],b[100000]={0},max=0;
        scanf("%d",&n);
        printf("Test %d:\n",d-t);
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(nt(a[i])){
                b[a[i]]++;
                if(a[i]>max)max=a[i];
                }
            }
        for(int i=0;i<=max;i++){
            if(b[i]>0){
                printf("%d xuat hien %d lan\n",i,b[i]);
                b[i]=0;
            }
        }
    }
    return 0;
}
