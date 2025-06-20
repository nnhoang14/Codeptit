#include <stdio.h>
#include <math.h>

void sw(int *a,int *b){
	int tg=*a;
	*a=*b;
	*b=tg;
}
int main(){
    int n,a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]%2!=0&&a[j]%2==0&&i<j)sw(&a[i],&a[j]);
			if(a[i]%2==0&&a[j]%2==0&&a[i]>a[j]&&i<j)sw(&a[i],&a[j]);
			if(a[i]%2!=0&&a[j]%2!=0&&a[i]>a[j]&&i<j)sw(&a[i],&a[j]);
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
    return 0;
}
