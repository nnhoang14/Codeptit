#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==0){
        if(b==0)printf("Vo so nghiem"); 
        else printf("%.2f",(float)-c/b);
    }
    else{
        int denta=b*b-4*a*c;
        if(denta>=0){
            if(denta==0)printf("%.2f",(float)-b/2*a);
            else printf("%.2f %.2f ",(float)(-b+sqrt(denta))/(2*a),(float)(-b-sqrt(denta))/(2*a));
        }
        else printf("NO");
    }
    return 0;
}
