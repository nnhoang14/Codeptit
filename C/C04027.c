#include <stdio.h>

void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int n;
	scanf("%d", &n);
	int a[n], i, j, k, z;
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for(j = 0; j < n - 1; j++) {
		int min = j;
		for(k = j + 1; k < n; k++) {
			if(a[k] < a[min]) {
				min = k;
			}
		}
		swap(&a[j], &a[min]);
		printf("Buoc %d: ", j + 1);
		for(z = 0; z < n; z++) {
			printf("%d ", a[z]);
		}
		printf("\n");
	}
	return 0;
}
