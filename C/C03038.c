#include <stdio.h>
#include <math.h>

void gt(int n,int a){
    int dem=0;
    for(int i=1;i<=n;i++){
        int cp=i;
        while(cp>0){
            if(cp%a==0){
                dem++;
                cp/=a;
            }
            else break;
        }
    }
    printf("%d\n",dem);
}
int main()
{
    int n,dem=0;
    scanf("%d",&n);
    while (n--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        gt(a,b);
    }
    return 0;
}
