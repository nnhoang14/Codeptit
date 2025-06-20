#include <stdio.h>
#include <math.h>


int chiahet(int n,int k){
    int gt,dem=0;
    for(int i=2;i<=n;i++){
        gt=i;
        while(gt>0){
        if(gt%2==0){
            dem++;
            gt/=2;
        }
        else break;
        }
        if(dem>=k)break;
    }
    if(dem>=k)printf("Yes");
    else printf("No");
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    chiahet(n,k);
    return 0;
}
