#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool check_even_number(char a[]){
	int len=strlen(a);
	for(int i=0;i<len;i++){
		int number= a[i]-'0';
		if(number%2!=0)return 0;
	}
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
		if(check(a)&&check_even_number(a))printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
