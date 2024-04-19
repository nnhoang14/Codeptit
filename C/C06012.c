#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

bool prime_number(int n){
	if(n<2)return 0;
	for (int i = 2; i<=sqrt(n); i++)
	{
		if(n%i==0)return 0;
	}
	return 1;
}

bool check_prime(char a[]){
	int len=strlen(a);
	for(int i=0;i<len;i++){
		int number= a[i]-'0';
		if(prime_number(number)!=1)return 0;
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
		if(check(a)&&check_prime(a))printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
