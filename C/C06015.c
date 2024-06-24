#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void *chuanhoaten(char *s){
    s[0]=toupper(s[0]);
    for(int i=1;i<strlen(s);i++){
        s[i]=tolower(s[i]);
    }
    return s;
}

void *chuanhoaho(char *s){
    for(int i=0;i<strlen(s);i++){
        s[i]=toupper(s[i]);
    }
    return s;
}

int main() {
    int test;
    scanf("%d",&test);
    getchar();
    while(test--){
        char s[105];
        char res[105]="";
        char tmp[105]=", ";
        gets(s);
        char *token= strtok(s," ");
        strcat(tmp,chuanhoaho(token));
        token= strtok(NULL," ");
        while(token!=NULL){
            strcat(res,chuanhoaten(token));
            token= strtok(NULL," ");
            if(token!=NULL)strcat(res," ");
            else {
              strcat(res,tmp); 
            }
        }
        //strcat(res," ");
        puts(res);
    }
    return 0;
}
