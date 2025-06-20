#include <stdio.h>

int main()
{
    int t,d;
    scanf("%d",&t);
    d=t;
    while (t--)
    {
        int n,a[100000],b[100000]={0};
        scanf("%d",&n);
        printf("Test %d:\n",d-t);
        for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[a[i]]++;
         }
        for(int i=0;i<n;i++){
            if(b[a[i]]>0){
                printf("%d xuat hien %d lan\n",a[i],b[a[i]]);
                b[a[i]]=0;
            }
        }
    }
    return 0;
}
