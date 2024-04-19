#include <stdio.h>

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int max=b;
	for(int i=1;i<=a;i++){
		printf("%d",i);
		if(i>max)max=i;
		for(int j=i+1;j<=b;j++){
			printf("%d",j);
		}
		int kt=i-1;
		if(kt>b-1)kt=b-1;
		for(int j=1;j<=kt;j++){
			if(max-j)
			printf("%d",max-j);
		}
		printf("\n");
	}
	return 0;
}
