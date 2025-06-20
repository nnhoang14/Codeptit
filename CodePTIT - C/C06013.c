#include <stdio.h>
#include <string.h>

void check(char s[]){
    int a[10]={};
    for(int i = 0; i < strlen(s); i++){
        if(s[i]>'9'||s[i]<'0'||s[0]=='0'){
            printf("INVALID\n");
            return;
            }
        else a[s[i]-'0']++;
    }

    for(int i = 0; i <10; i++){
        if(a[i]==0){
            printf("NO\n"); 
            return ;
            }
    }
    printf("YES\n");
}

int main(){
    int test;
    scanf("%d",&test);
    while (test--)
    {
        char s[1005];
        scanf("%s", s);
        check(s);
    }
    return 0;
}
