#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void *chuanhoa(char *s){
  for(int i = 0; i < strlen(s); i++){
    s[i] = tolower(s[i]);
  }
  return s;
}

void solve(){
  char s1[200];
  char s2[20];
  gets(s1);
  gets(s2);
  char *token = strtok(s1," ");
  while(token != NULL){
    char tmp[200];
    strcpy(tmp,token);
    if(strcmp(chuanhoa(s2),chuanhoa(tmp))!=0)printf("%s ",token);
    token = strtok(NULL," ");
  }
  printf("\n");
}

int main(){
    int test,times=1;;
    scanf("%d",&test);
    getchar();
    while (test--)
    {
      
      printf("Test %d: ",times);
      solve();
      times++;
    }
    return 0;
}
