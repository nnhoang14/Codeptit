#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d",&a);
    while (a--)
    {
        int n;
        scanf("%d",&n);
        int m=n/2;
        if(n<2)printf("NO");
        else for(int i=2;i<=m;i++){
            if(n%i==0){
                printf("NO\n");
                break;
                }
                if(i==m) printf("YES\n");
        }
    }
   return 0; 
}
