#include <stdio.h>

int main() {
	int a,b,count=0;
	scanf("%d%d",&a,&b);
	int max=b;
	for(int i=1;i<=a;i++){
		for(int j=i;j>0;j--){
			if(j==(i-b))break;
			printf("%d",j);	
		}
		for(int j=2;j<=b-count;j++){
			printf("%d",j);
		}
		count++;
		printf("\n");
	}
	return 0;
}
