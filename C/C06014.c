#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void *chuanhoa(char *s){
    s[0]=toupper(s[0]);
    for(int i=1;i<strlen(s);i++){
        s[i]=tolower(s[i]);
    }
    return s;
}

int main() {
    int test;
    scanf("%d\n",&test);
    while(test--){
        char s[100];
        char res[100]="";
        fgets(s,80,stdin);
        s[strlen(s)]='\0';
        char *token= strtok(s," ");
        while(token!=NULL){
            strcat(res,chuanhoa(token));
            token= strtok(NULL," ");
            if(token!=NULL)strcat(res," "); 
        }
        puts(res);
    }
    return 0;
}
