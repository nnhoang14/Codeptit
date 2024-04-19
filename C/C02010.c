#include <stdio.h>

int main() {
	int a,b,count=0;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=a;i++){
		printf("%d",i);
		for(int j=count;j<b-1;j++){
			printf("%d",j+2);
		}
		int cp=count;
		if(cp>=b)cp=b-1;
		for(int j=cp;j>0;j--){
			printf("%d",j);
		}
		count++;
		printf("\n");
	}
	return 0;
}
