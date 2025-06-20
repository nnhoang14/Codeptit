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
    while (n--)
    {
        int a;
        scanf("%d",&a);
        for (int i=2;i<a;i++)
        {
            if(i>a-i)break;
            if(nt(i)&&nt(a-i))printf("%d %d ",i,a-i);
            
        }
        printf("\n");
    }
    
    return 0;
}
