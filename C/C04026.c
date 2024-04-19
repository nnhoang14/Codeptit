#include <stdio.h>
#include <math.h>

void sw(int *a,int *b){
	int tg=*a;
	*a=*b;
	*b=tg;
}
int main(){
    int n,a[100],b=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	for(int i=0;i<n;i++){
		int d=0;
		for(int j=0;j<n;j++){
			if(a[i]>a[j]&&i<j)sw(&a[i],&a[j]);
		}

		printf("Buoc %d: ",b);
		for(int j=0;j<n;j++){
			printf("%d ",a[j]);
		}
		b++;		
		for(int j=0;j<n-1;j++){
			if(a[j]>a[j+1])d++;
		}
		if(d==0)break;
		printf("\n");
	}
    return 0;
}
