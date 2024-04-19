#include <stdio.h>

int main() {
	int a,b,count=0;
	scanf("%d%d",&a,&b);
	for(int i=0;i<a;i++){
		for(int j=count;j<b;j++){
			char kt=65+j;
			printf("%c",kt);
		}
		int cp=count;
		if(cp>b)cp=b;
		for(int j=cp;j>0;j--){
			char doi=64+j;
			printf("%c",doi);
		}
		count++;
		printf("\n");
	}
	return 0;
}
