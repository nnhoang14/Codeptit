#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        int a,b[1000],dem=0;
        scanf("%d",&a);
        for (int i=0;i<a;i++){
            scanf("%d",&b[i]);
        }
        for (int i=0;i<a;i++){
           if(b[i]!=b[a-1-i])dem++;
        }
        if(dem>0)printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
