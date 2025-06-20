#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char s1[100]={};
    gets(s1);
    char a[100][100]={};
    int len=0;
    char *token=strtok(s1," ");
    while (token!=NULL)
    {
        bool check=true;
        for(int i=0;i<len;i++){
            if(strcmp(token,a[i])==0){
                check=false;
                break;
            }
        }
        if(check==true){
        strcpy(a[len++],token);
        }
        token=strtok(NULL," ");
    }
    for (int i=0;i<len;i++){
        printf("%s ",a[i]);
    }
    return 0;
}
