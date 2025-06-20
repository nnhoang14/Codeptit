#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        long int a,b,c,d,cd,cr;
        scanf("%ld%ld%ld%ld",&a,&b,&c,&d);
        cd=c-a;
        cr=d-b;
        if(cd==cr)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
