#include <stdio.h>
#include <math.h>

int main(){
    int n;
	scanf("%d",&n);
	while (n--)
	{
		int t,a[100],b[100]={0},max=0;
		scanf("%d",&t);
		for (int i = 0; i<t; i++){
			scanf("%d",&a[i]);
			b[a[i]]++;
		}
		for (int i = 0; i<t; i++){
			if(b[a[i]]>max)max=b[a[i]];
		}
		for (int i = 0; i<t; i++){
			if(b[a[i]]==max){
				printf("%d ",a[i]);
				b[a[i]]=0;
				}
		}
		printf("\n");
	}
    return 0;
}
