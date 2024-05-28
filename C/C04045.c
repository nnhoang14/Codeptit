#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int size=0,sc=0,sl=0;
        char kitu=' ';
        while (kitu!='\n')
        {
           int num;
           scanf("%d",&num);
           size++;
           if(num%2==0)sc++;
           else sl++;
           kitu=getchar();
        }
        if(size%2==0 && sc>sl || size%2==1 && sc<sl)printf("YES\n");
        else printf("NO\n");
    }
    
    return 0;
}