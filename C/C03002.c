#include <stdio.h>
#include <math.h>
int snt(int so){
    int dem=0;
    if(so<2)return 0;
    for(int i=2;i<=sqrt((float)so);i++){
        if(so%i==0)return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(snt(i)==1)printf("%d\n",i);
    }
   return 0; 
}
