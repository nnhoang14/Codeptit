#include <stdio.h>
#include <string.h>

int check(int num){
    int tmp=num,count=0,dem=0;
    int f=num%100,s=num/100;
    if(f%11==0 && s%111==0) return 1;
    while (tmp>0)
    {
        int a=tmp%10;
        tmp/=10;
        int b=tmp%10;
        if(a>b) count ++;
        if(a==6||a==8) dem++;
    }
    if(count==5||dem==5)return 1;
    return 0;
}

int num_string(char *token){
    int result=0;
    for(int i = 0; i < strlen(token); i++){
        if(token[i] != '.')result=result*10+(token[i]-'0');
    } 
    return result;
}

int main(){
    int test;
    scanf("%d",&test);
    getchar();
    while (test--)
    {
        char s[100];
        gets(s);
        char *token=strtok(s," ");
        token=strtok(NULL," ");
        int num=num_string(token);
        if(check(num))printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
