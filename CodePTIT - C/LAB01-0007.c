#include <stdio.h>
#include <math.h>

int main() {
	int n,a[100];
	float tb;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		tb+=a[i];
	}
	printf("%.3f", tb/n);
	return 0;
}
