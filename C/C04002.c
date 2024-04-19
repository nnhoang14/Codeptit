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
    int n;
    scanf("%d",&n);
    while(n--){
        int a,b[1000];
        scanf("%d",&a);
        for (int i=0;i<a;i++){
            scanf("%d",&b[i]);
        }
        for (int i=0;i<a;i++){
           if(nt(b[i]))printf("%d ",b[i]);
        }
        printf("\n");
    }
    return 0;
}
