#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==0){
        if(b!=0)printf("Vo nghiem");
        else printf("Vo so nghiem");
    }
    else printf("%.2f",(float)-b/a);
    return 0;
}
