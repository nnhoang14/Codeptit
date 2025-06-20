#include <stdio.h>
#include <math.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int gh=65+b-1;
    for(int i=a-1;i>=0;i--){
        for(int j=0;j<b;j++){
            int ss=65+i+j;
            if(ss<gh)printf("%c",(char)ss);
            else printf("%c",(char)gh);
        }
        printf("\n");
    }
    return 0;
}
