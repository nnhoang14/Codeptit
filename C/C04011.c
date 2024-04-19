#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        int b,a[100],dem=0;
        scanf("%d",&b);
        for(int i=0;i<b;i++)scanf("%d",&a[i]);
        for(int i=0;i<b;i++){
            int d=0;
            for(int j=0;j<b;j++){
                if(i>=j&&a[i]>a[j])d++;
            }
            if(d==(i))dem++;
        }
        printf("%d\n",dem);
    }
    return 0;
}
