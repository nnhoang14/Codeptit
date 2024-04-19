#include <stdio.h>
#include <math.h>

int main()
{
    int n,a[100],dem=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        int d=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j])d++;
        }
        if(d==1)dem++;
    }
    printf("%d\n",dem);
    for(int i=0;i<n;i++){
        int d=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j])d++;
        }
        if(d==1)printf("%d ",a[i]);
    }
    return 0;
}
