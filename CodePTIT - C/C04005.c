#include <stdio.h>
#include <math.h>

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
        int max=b[0];
        for (int i=0;i<a;i++){
            if(b[i]>max)max=b[i];
        }
        printf("%d\n",max);
        for (int i=0;i<a;i++){
            if(b[i]==max)printf("%d ",i);;
        }
        printf("\n");
    }
    return 0;
}
