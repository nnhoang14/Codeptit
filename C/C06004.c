#include <stdio.h>
#include <string.h>

int main()
{
    char a[10005];
    gets(a);
    getchar();
    int cc=0,cs=0,kt=0;
    for(int i=0; i<strlen(a); i++){
        if(a[i] >= 'a' && a[i] <= 'z'||a[i] >= 'A' && a[i] <= 'Z') cc++;
        else if (a[i] >= '0' && a[i] <= '9')cs++;
        else kt++;
    }
    printf("%d %d %d",cc,cs,kt);
    return 0;
}
