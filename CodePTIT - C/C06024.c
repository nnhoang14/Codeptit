#include <stdio.h>
#include <string.h>

void sw(int *a, int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

void reverse(int num[], int n){
    for(int i = 0; i < n ; i++){
      if(n-1-i>=i)sw(&num[i],&num[n-1-i]);
      else break;
    }
}

void input_array(char a[], int num[]){
    fgets(a,501,stdin);
    a[strlen(a)-1]='\0';
    int n = strlen(a);
    for(int i = 0; i < n; i++){
      num[i] = a[i] - '0';
    }
    reverse(num,n);
}

void output_array(int num[], int n){
    for(int i = 0; i < n; i++){
      printf("%d",num[i]);
    }
}

void addition(int num_f[], int num_s[], int res[], int max){
    int r=0;
    for(int i = 0; i < max; i++){
      int sum=num_f[i]+num_s[i]+r;
      res[i]=sum%10;
      r=sum/10;
    }
    if(r>0){
      res[max]=r;
      max++;
    }
    reverse(res,max);
    output_array(res,max);
}

void solve(){
    char a[501],b[501];
    int num_f[501]={},num_s[501]={},res[505];
    input_array(a,num_f);
    input_array(b,num_s);
    int f = strlen(a), s = strlen(b), max=f;
    if(max<s)max=s;
    addition(num_f, num_s, res, max);
}

int main()
{
    int test;
    scanf("%d",&test);
    getchar();
    while(test--){
      solve();
      printf("\n");
    }
  return 0;
}
