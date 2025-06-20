#include <stdio.h>

int main(){
    int testcase,gia[10]={1,2,5,10,20,50,100,200,500,1000};
    scanf("%d",&testcase);
    while (testcase--)
    {
        int n,count=0;
        scanf("%d",&n);
        for(int i=9;i>=0;i--){
            if(n>=gia[i]){
                count+=n/gia[i];
                n%=gia[i];
                }
        }
        printf("%d\n",count);
    }
    return 0;
}