#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

char *my_strlwr(char *s){
    for(int i = 0; i < strlen(s); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

int main(){
    char s[10005];
    char a[100][100];
    int b[100]={0};
    int len=0;
    gets(s);
    s[strlen(s)]='\0';
    char *token =strtok(s," ");
    while (token!=NULL)
    {
        int check=true;
        my_strlwr(token);
        for( int i = 0 ; i < len ; i++){
            if(strcmp(a[i],token)==0){
                check=false;
                b[i]++;
                }
        }
        if(check==true){
            b[len]++;
            strcpy(a[len++],token);
        }
        token= strtok(NULL," ");
    }
    for(int i = 0; i < len; i++){
        printf("%s %d\n",a[i],b[i]);
    }
    return 0;
}
