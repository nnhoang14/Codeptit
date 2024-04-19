#include <stdio.h>

int main() {
	int a,b,max,min,count=0;
	scanf("%d%d",&a,&b);
	if(a>b)max=a;
	else max=b;
	min=a+b-max;
	for(int i=0;i<a;i++){
		char kt=96+max-count;
		int cp=count;
		if(cp>min)cp=min;
		for(int j=0;j<cp;j++){
			char doi=96+max-j;
			printf("%c",doi);
		}
		for(int j=count;j<b;j++){
			printf("%c",kt);
		}
		count++;
		printf("\n");
	}
	return 0;
}
