#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int a,b[100],d=0;
        scanf("%d",&a);
        for(int i=0;i<a;i++)scanf("%d",&b[i]);
        for(int i=0;i<a-1;i++){
            if(b[i]==b[i+1])d++;
            }
        printf("%d\n",d);
    }
    return 0;
}
