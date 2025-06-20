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

int main()
{
  char s[105];
  char a[105][105];
  char tmp[105];
  int n = 0;
  gets(s);
  chuanhoa(s);
  char *token = strtok(s," ");
  while(token != NULL){
    strcpy(a[n++],token);
    token = strtok(NULL," ");
  }
  for(int i= 0; i < n ;i++){
    if(i != n-1) printf("%c",a[i][0]);
    else printf("%s",a[n-1]);
  }
  printf("@ptit.edu.vn");
  return 0;
}
