#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool check_start_end(char a[]){
	int len=strlen(a);
	int start=a[0]-'0',end=a[len-1]-'0';
	if(start==8&&start-end==0)return 1;
	return 0;
}
bool check_sum(char a[]){
	int len=strlen(a);
	int sum=0;
	for(int i=0;i<len;i++){
		sum+= a[i]-'0';
	}
	if(sum%10!=0)return 0;
	return 1;
}
bool check(char a[]){
	int len=strlen(a),i=0;
	while (i<=len-i-1)
	{
		if(a[i]!=a[len-i-1])return 0;
		i++;
	}
	return 1;
}

int main() {
	int test;
	scanf("%d",&test);
	while (test--)
	{
		char a[500];
		scanf("%s",&a);
		if(check(a)&&check_sum(a)&&check_start_end(a))printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
